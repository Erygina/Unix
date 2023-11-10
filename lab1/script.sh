#!/bin/bash 

# Временный каталог
tmp_dir=$(mktemp -d)

# Текущий каталог
directory=$(pwd)

# Функция очистки временного каталога
clean_and_exit_handler()
{
  # Завершение работы
  local rc=$?
  trap - EXIT
  # Удаление временного каталога
  rm -rf "$tmp_dir"
  exit $rc
}

trap clean_and_exit_handler EXIT HUP INT QUIT PIPE TERM

# Исходный файл
source_file="$1"

# 1. Провека существования существования исходного файла
if [ ! -f "$source_file"  ]; then
 echo "Файл не существует"
 exit 1
fi

# Извлекаем комментарий с названием выходного файла
comment_name="$(grep '&Output:' "$source_file")"
# Разбиваем строку на две части, используя разделитель ":"
comment_name_without_extra_char="$(echo "$comment_name" | cut -d ':' -f2-)"
# Убираем все пробелы
output_file=$(echo "$comment_name_without_extra_char" | tr -d '[:space:]')

cd "$temp"


# 3. Компиляция исходного файла
# Проверка типа файла
if [[ "$source_file" == *.cpp ]]; then
 # Компиляция исходного файла, создание выходного файла во временной директории 
 g++ -o "$tmp_dir/$output_file" "$directory/$source_file"
 if [ $? -ne 0 ]; then
  echo "Выбранный файл не компилируется"
  clean_and_exit_handler 1
 fi

else gcc -o "$tmp_dir/$output_file" "$directory/$source_file"
 if [ $? -ne 0 ]; then
  echo "Выбранный файл не компилируется"
  clean_and_exit_handler 1
 fi
fi

# Перемещение файла
mv "$tmp_dir/$output_file" "$directory"
if [ $? -ne 0 ]; then
 echo "Ошибка перемещения файла"
 clean_and_exit_handler 1
fi

echo "Успешная компиляция файла: $source_file"
# Выведем в терминал то, что выводится в исполняемом файле
echo "Вывод из файла"
 ./$output_file
clean_and_exit_handler 0
 
