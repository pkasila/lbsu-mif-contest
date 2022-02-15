# Task 2. Gift of a dream

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 1 s    |
| RAM limit        | 64 MB  |

What is the best gift for a man on February 23rd? One of the legendary and influential representatives of this sex,
Colonel Piktor Vavlovich, simply loves whiskey and sequences an, where the element numbered N is the average score
all grades for that day.

The sequence an is constructed as follows: a1 = 0, the existing sequence is appended to the end
it is the same, and each attributed element is increased by 1 modulo k (for example, with k = 3, the sequence
looks like this: `0 -> 01 -> 0112 -> 01121220 -> ...`).

Make Piktor Vavlovich's gift a pleasant one! Make up an algorithm that, given the input N and k,
(1 ≤ N ≤ 1018, 2 ≤ k ≤ 100) determines which number is in the Nth place in the sequence.

## Input file format

The program is given two numbers (1 ≤ N ≤ 1018, 2 ≤ k ≤ 100).

## Output file format

Print the number at the Nth position in the given sequence.

## Examples

| `input.txt`           | `output.txt` |
|-----------------------|--------------|
| <pre>12 5</pre>       | <pre>3</pre> |
| <pre>12 2</pre>       | <pre>1</pre> |
| <pre>12345678 9</pre> | <pre>3</pre> |

## Notes

In the first example, the sequence looks like this:

0112122312232334

The 12th element is 3.

In the second example:

0110100110010110

The 12th element is 1.

## Testing

1 group of tests - 1 ≤ N ≤ 1e6 - 20 points

Group 2 tests - 1 ≤ N ≤ 1e8 - 10 points

Group 3 tests - no additional restrictions - 70 points

