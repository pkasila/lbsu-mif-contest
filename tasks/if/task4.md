# Task 4. Woodcarving

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 1 s    |
| RAM limit        | 64 MB  |

Experienced programmer Vintsuk fixed bugs after June. He was a famous linguist, so he certainly mastered this task, but
did not save himself from burnout.

The doctor advised him to go to a sanatorium and take up handicrafts. Vintsuk decided to start with the second one. Him
since childhood I wanted to do wood carving. He found a stick 1 meter long, bought a very thin chisel and began to think
regarding the pattern. Vintsuk was a programmer to the core, so he decided that he would be next to cut patterns way:

He divided the stick into 5 equal parts. On the 2nd and 4th parts, he decided not to cut anything. Each remaining part (
1st, 3rd and 5th) he also divided into five equal subparts and decided to leave intact the 2nd and 4th subparts of each
part. Total he made n such divisions, after which he began to cut patterns according to the markup.

Tell Vintsuk, knowing n, whether there will be a pattern at the point of the stick with coordinate x. Vintsuk's incisor
is very thin and can cut stick at the pico level, the origin of the stick is the origin and is equal to zero. The end of
the stick is equal to one.

## Input file format

Numbers n(0 <= n <=10), x(0 < x <= 1).

## Output file format

Output "donot_touch" if the point should not contain a thread. Output "cut" if the point should contain a thread.

## Examples

| `input.txt` | `output.txt` |
| --- | --- |
| 1 0.5 | cut |
| 2 0.06 | donot_touch |
| 2 0.01 | cut |
| 2 0.041 | donot_touch |
| 2 0.04 | cut |

## Note for example 1:

Divide the stick into 5 parts. The first range is (0,0.2], the second - (0.2,0.4), the third - (0.4,0.6), the fourth - (
0.6,0.8), fifth - (0.8,1]. Our point falls into the third, i.e. a pattern will be cut out on it.

## Note for example 2:

Let's divide the stick into 5 parts, as in the first example. Further, the first is divided into five equal parts
according to a similar principle, third and fifth bands. Consider dividing the first range (0,0.2]:

The first new subrange is (0,0.04], the second - (0.04,0.08), the third - (0.08,0.12), the fourth - (0.12,0.16), the
fifth - (0.16,0.2]. Our desired point falls into the second, i.e. it will NOT have a pattern cut out

