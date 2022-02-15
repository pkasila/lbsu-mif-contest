# Task 3. Lyonya and hydrogen rocks

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 1 s    |
| RAM limit        | 64 MB  |

The future teacher of the Lyceum Lenya is very fond of the mythical hydrogen stones. Not so long ago, Lyonya found a
field `a`
with size `n x n` with hydrogen rocks left there. Each stone was inscribed with a row and column number, in which it's
located. Sequentially, if `i` – rows index, `j` – columns index, then Lyonya will write on the rock (`i`, `j`) number
equal to `i ^ j` (numeration starts with `0`). Lyonya began to play with the numbers written down, he came up with many
different games, but then he got bored, and he began to come up with questions that he himself answered. Soon he found a
question he couldn't answer and asks you for help.

Lyonya is interested in how many of the n×n written numbers have the `p`-th bit equal to one. He asks you for help q
times, each times, telling you different `p` and `n`.

Can you help Lyonya answer his questions?

## Input file format

The first line of the input contains an integer `q` (`1 ≤ q ≤ 10^5`):

The `i`-th of the following `q` lines contains two integers `n`, `p` (`1 ≤ n ≤ 10^18`, `1 ≤ p ≤ 64`)

## Output file format

Print `q` lines: in the `i`-th of them print a single number - the remainder after dividing the answer to Lyonya's `i`
-th question to `1000000007`.

## Example

| `input.txt`                       | `output.txt`           |
|-----------------------------------|------------------------|
| <pre>3<br>1 1<br>2 1<br>3 2</pre> | <pre>0<br>2<br>4</pre> |

## Note

The third query will list the numbers `[0, 1, 2, 1, 0, 3, 2, 3, 0]`. The 2nd bit is equal to one for the
numbers `[2, 3, 2, 3]`.
