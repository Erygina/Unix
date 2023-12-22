FROM ubuntu:latest

# Устанавливаем рабочий каталог
WORKDIR /Lab2

# Копируем наш файл внутрь контейнера 
COPY script.sh /Lab2/script.sh

# Изменяем права доступа для выполнения скрипта
RUN chmod +x /Lab2/script.sh

# Устанавливаем том, в котором будем хранить файлы
VOLUME ["/shared_data"]

# Запуск
CMD ["/Lab2/script.sh"]
