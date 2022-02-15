# Problem 1. Alinade and puff

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 1 s    |
| RAM limit        | 64 MB  |

Alinad came to the dining room to buy himself a puff as usual. The saleswoman has a puff weighing `M` and weights
weighing `1, 3, 9 ... 3^k` grams. To get a puff for free, Alinad must balance the puff on the scales. Alinad really
wants to just buy a puff, but he has already spent all the money on the gym and is very tired. Help him find those
weights that will lie next to the puff, and those that will lie on the other side of the scale.

## Input file format

The program is given a number `M` (`1 ≤ M ≤ 10^6`).

## Формат выходного файла

Print in the first line the weights of the weights to be placed next to `M`, and in the other line the weights to be
placed on the other bowl scales. Mass values are displayed in descending order(!).

## Examples

| `input.txt`  | `output.txt`                           |
|--------------|----------------------------------------|
| <pre>5</pre> | <pre>with M: 3 1<br>without M: 9</pre> |
| <pre>9</pre> | <pre>with M:<br>without M: 9</pre>     |
