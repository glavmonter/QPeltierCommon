# QPeltierCommon

Генераторы кода и настройки для контроллера термоэлектрического преобразователя.

# Использование

Клонируем репозиторий как сабмодуль в *common*. Подключаем скрипты cmake:

```
include(common/cmake/macro-add-python.cmake)
include(common/cmake/function-generate-commands.cmake)
```

Ищем Python и создаём виртуальное окружение, генерируем хедер с командами:

```
add_python_venv(${CMAKE_SOURCE_DIR}/common/requirements.txt)
generate_commands(${CMAKE_SOURCE_DIR}/common/commands.json)
```

Добавляем сгенерированный хедер и python к зависимостям:

```
add_executable(${TARGET_NAME} ${COMMANDS_SRC})
add_dependencies(${TARGET_NAME} ${PYTHON_VENV_TARGET})
```

В коде используем сгенерированный хедер:

```cpp
#include <commands.hpp>
```
