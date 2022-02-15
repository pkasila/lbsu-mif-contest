# Task 4. Lyceum Council

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 2 s    |
| RAM limit        | 64 MB  |

The Lyceum Council receives a lot of proposals. Often there are so many of them that it is simply impossible to review
in one day. In this case, all proposals are divided into three equal groups and all proposals from the second, not
including “boundary” sentences. The next day, the same is done for each of the remaining groups (
new intervals are obtained by dividing the old ones into three equal parts). These steps are repeated until all
proposals will not be considered.

Lyceist Sergey Sanchuk from 10 "IM" loves to play table tennis and is extremely dissatisfied with the fact that after
tennis tables are being removed. In the hope of stopping this lawlessness, Serezha sent a proposal to the Council and
is now waiting can't wait for the outcome of the review.

Serezha knows that if all sentences are divided into B segments, his sentence will be at the beginning of the A-th one.
Help Serezha find out if his proposal will be considered in X days, if there are enough proposals to be considered an
infinite number of days.

## Input file format

The program is given three numbers: A, B (0 <= A, B <= 10^6) - the number of the segment at the beginning of which the
sentence is located their number, as well as X (1 <= X <= 10^6) – the day on which Serezha wants to know the status of
his offer.

## Output file format

Output "YES" if the proposal will be considered and "NO" otherwise.

## Examples

| `input.txt` | `output.txt` |
|-------------|--------------|
| `5 9 2`     | `YES`        |
| `7 9 2`     | `NO`         |