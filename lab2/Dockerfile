FROM ubuntu:latest

# Устанавливаем рабочий каталог
WORKDIR /Lab2

# Копируем наш файл внутрь контейнера 
COPY script.sh /Lab2/script.sh

# Устанавливаем том, в котором будем хранить файлы
VOLUME ["/shared_data"]

# Устанавливаем права для выполнения скрипта внутри контейнера
CMD ["/Lab2/script.sh"]
