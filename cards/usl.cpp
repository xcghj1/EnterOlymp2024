Ковшик и Тафсир — два блестящих студента колледжа Читтагонг, лучшего колледжа на протяжении века в Читтагонге, Бангладеш. Их дни начинаются с множества занятий, и вскоре они перегружены. Поэтому, чтобы дать мозгу отдохнуть, они любят играть в карточную игру «Какая карта?» в свободное время между занятиями. Описание игры ниже:

В этой игре значение карты определяется как номинал карты, если она имеет значение от 2 до 9. В противном случае значение карты равно 10. Изначально есть колода из 52 карт рубашкой вверх. Возьмите верхние 25 карт из колоды в руку. Установите Y = 0. Затем выполните следующие шаги три раза:

- Возьмите верхнюю карту из колоды и определите ее значение.
- Пусть значение карты будет X. Прибавьте X к Y.
- Уберите эту карту и (10 − X) верхних карт из колоды.

Наконец, положите оставшиеся 25 карт в руке наверх колоды. Задача — определить Y-ю карту в колоде, считая снизу.

Тафсир и Ковшик знают исходный порядок карт, поэтому думают, что смогут назвать Y-ю карту, не заглядывая в колоду, но чаще всего не могут найти правильную карту и считают себя недалекими. Пожалуйста, помогите им повысить уверенность в себе.

### Ввод
Первая строка входного файла содержит целое число, представляющее количество тестов. Каждый тест описан ниже. Каждый тест состоит из 52 карт, данных в порядке исходной колоды, снизу вверх. Формат для каждой карты — строка из 2 символов: первый символ — это значение, второй символ — масть.

### Вывод
Для каждого теста сначала выведите порядковый номер теста, затем через пробел выведите искомую карту. Ознакомьтесь с примером ввода и вывода. Гарантируется, что решение всегда существует.

### Пример ввода
```
2  
AC KC QC JC TC 9C 8C 7C 6C 5C 4C 3C 2C AD KD QD JD TD 9D 8D 7D 6D 5D 4D 3D 2D AH KH QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S  
AC KC QC JC TC 9C 8C 7C 6C 5C 4C 3C 2C AD KD QD JD TD 9D 8D 7D 6D 5D 4D 3D 2D AH KH QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S
```

### Пример вывода
```
Case 1: 8H  
Case 2: 8H
```