# Контест "Алгоритмы целочисленной арифметики"

## Задания

| # | Условие 10ИМ | Решения 10ИМ | Условие 10ИФ | Решения 10ИФ                                                                                                                                                                                                                                                      |
| --- | --- | --- | --- |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1 | [Условие 10ИМ](tasks/im/task1.md) | [Решение 1](solutions/task1/im/sol01/main.cpp) <br> [Решение 2](solutions/task1/im/sol02/main.cpp) | [Условие 10ИФ](tasks/if/task1.md) | [Решение 1](solutions/task1/if/sol01/main.cpp) <br> [Решение 2](solutions/task1/if/sol02/main.cpp)                                                                                                                                                                |
| 2 | [Условие 10ИМ](tasks/im/task2.md) | [Решение 1](solutions/task2/im/sol01/main.cpp) <br> [Решение 2](solutions/task2/im/sol02/main.cpp) | [Условие 10ИФ](tasks/if/task2.md) | [Решение 1](solutions/task2/if/sol01/main.cpp) <br> [Решение 2](solutions/task2/if/sol02/main.cpp)                                                                                                                                                                |
| 3 | [Условие 10ИМ](tasks/im/task3.md) | [Решение 1](solutions/task3/im/sol01/main.cpp) <br> [Решение 2](solutions/task3/im/sol02/main.cpp) | [Условие 10ИФ](tasks/if/task3.md) | [Решение 1 (медленное)](solutions/task3/if/sol01/main.cpp) <br> [Решение 2 (медленное с bitset)](solutions/task3/if/sol02/main.cpp) <br> [Решение 3 (slow, alt)](solutions/task3/if/sol03/main.cpp) <br> [Решение 4 (быстрое)](solutions/task3/if/sol04/main.cpp) |
| 4 | [Условие 10ИМ](tasks/im/task4.md) | [Решение 1](solutions/task4/im/sol01/main.cpp) <br> [Решение 2](solutions/task4/im/sol02/main.cpp) | [Условие 10ИФ](tasks/if/task4.md) | [Решение 1](solutions/task4/if/sol01/main.cpp) <br> [Решение 2](solutions/task4/if/sol02/main.cpp)                                                                                                                                                                |

## Как работать?

### Общие правила

Создавайте отдельные ветки для ваших изменений и делайте pull requests.

Рекомендовано называть свои ветки по следующему паттерну: `task[no]_[im/if]`. Это позволит быстрее разобраться с тем, что было добавлено и/или изменено.

### Внесение условий

Для того, чтобы внести условие задания, внесите изменения в файл `tasks/[im/if]/task[no].md`. В нём в формате Markdown запишите условие вашего задания.

В качестве примера можно использовать [условие задания №3 10ИФ](tasks/if/task3.md).

### Внесение решений

Изменения вносятся в файл `solutions/task[no]/[im/if]/sol[sol_no]/main.cpp`.

Если решений больше двух, можете создать дополнительно, например, `sol03` и `sol04`, после чего внести в `solutions/task[no]/[im/if]/CMakeLists.txt` аналогично `sol01` и `sol02`. Также обновите `README.md`, добавив ссылку на решение в таблицу.