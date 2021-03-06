# Sort2
## Сортировка выбором
Смысл cортировки выбором (Selection Sort) состоит в поиске минимального значения элемента в массиве, и перемещения этого значения в «начало» массива.

«Начало» в алгоритме cортировкb выбором с каждым шагом цикла смещается в сторону хвоста массива. Поэтому на первой итерации цикла, найденное минимальное значение меняется местами со значением в нулевой ячейке массива. На второй итерации «начало» уже будет указывать на следующую (первую) ячейку и так далее.
 
По факту получается простой обмен местами значений ячеек массива. При таком обмене значениями не нужен сдвиг (перезапись) всех элементов массива, чтобы записать минимальное значение в соответствующую ячейку. То есть алгоритм cортировкb выбором не требует использования дополнительной памяти. Перезапись значений происходит сразу после нахождения минимального значения в массиве.

В алгоритме роль «начала» играет счетчик i внешнего цикла. На каждом шаге значение элемента, номер которого отсчитывает эта переменная, считается минимальным. Вложенный цикл проводит проход по хвосту массива, вычисляя номер ячейки массива с минимальным значением.

Если после прохода вложенным циклом переменная minn не изменилась, значит из всего хвоста массива, который обрабатывается, минимального значения нет, и элемент «начала» остается на своем месте. Иначе – значение меняется местами с найденным.

Хвост обрабатываемого массива с каждым проходом циклов уменьшается и когда достигнет конца массива, он (массив) окажется уже отсортированным. Работа алгоритма cортировкb выбором прекратится.

## Сортировка Шелла
В 1959 году американский ученый Дональд Шелл опубликовал алгоритм сортировки, который впоследствии получил его имя – «Сортировка Шелла». Этот алгоритм может рассматриваться и как обобщение пузырьковой сортировки, так и сортировки вставками.

Идея метода заключается в сравнение разделенных на группы элементов последовательности, находящихся друг от друга на некотором расстоянии. Изначально это расстояние равно d или N/2, где N — общее число элементов. На первом шаге каждая группа включает в себя два элемента расположенных друг от друга на расстоянии N/2; они сравниваются между собой, и, в случае необходимости, меняются местами. На последующих шагах также происходят проверка и обмен, но расстояние d сокращается на d/2, и количество групп, соответственно, уменьшается. Постепенно расстояние между элементами уменьшается, и на d=1 проход по массиву происходит в последний раз.

Сортировка Шелла уступает в эффективности быстрой сортировки, но выигрывает у сортировки вставками.
