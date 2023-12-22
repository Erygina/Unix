#!/bin/bash

lock_file_path="/shared_data/lock"
delay_sec=1

# Функция создания имени файла
create_filename() {
  counter=1
  filename=$(printf "%03d" $counter)
  while [-e "/shared_data/$filename" ]; do
   ((counter++))
  done
}

while true; do
  # Создаем блокировку
  exec 3>"$lock_file_path"
  flock -x 3
  filename=$(create_filename)
  container_id=$(/dev/urandom tr -dc A-Za-z0-9 | head -c14)
  echo "Container ID: $container_id, file number: $filename" > "shared_data/$filename"
  echo "Create container_id $container_id and filename $filename"
  exec 3<&-
  sleep delay_sec
  rm "/shared_data/$filename"
  sleep delay_sec
done
