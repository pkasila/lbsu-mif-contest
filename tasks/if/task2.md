# Task 2. General Gavs

|                  |        |
|------------------|--------|
| Input filename   | STDIN  |
| Outfile filename | STDOUT |
| Time limit       | 1 s    |
| RAM limit        | 64 MB  |

The sounds that merged into a deafening howl filled the air. Impenetrable darkness, bordering on a brutal flame,
ruthlessly consumed everything in its path. The moment when every worthless little thing cuts into memory ... And
darkness ...

- General ... General, wake up, General Gavs ... Doctor, doctor urgently

... The intrusive whiteness of the infirmary corrodes the eyes with its indifference and detachment. You are engulfed in
a whirlwind of memories.

You are leading the left flank of the space troops into battle... Explosions, shooting. It was an unequal battle ... The
right flank fled, and left you without cover ... Boarding ... Potato Generalissimo Bulbash ... The ship is captured ...
Someone is chanting “FOR-BUL-BU” ... Hand-to-hand combat... The reserve flotilla has entered the battle... The enemy
retreats, setting fire to the ship... An explosion... A deafening sound... Darkness… Infirmary

You take the letter from your bed. “... In the entire history of the fight against aliens by communist bulbashists, this
it was the greatest battle ... General Gavs, for your stamina and courage, you are appointed supreme commander Forces of
Resistance...

To complete the task, you need to intercept and decipher the conversations of Generalissimo Bulbash with the KGB
(Bulba's space guard). Intelligence reported that an alien Caesar cipher is used for encryption, where each the symbol
is shifted an mod 3 to the right. Where n is the number of full years of war. an is given by the sequence: the first
element is 0, then the already written part is attributed to the right, adding 1 to each element.
(0) -> (0, 1) -> (0, 1, 1, 2) -> (0, 1, 1, 2, 1, 2, 2, 3).”

## Input file format

The program is given an integer number of war years n (1 <= n <= 10000). And a message intercepted using the P-354 “Bumblebee” radio line
s (1 <= s <= 10000)

## Output file format

Output the decrypted message using ASCII.

## Examples

| `input.txt`                                                               | `output.txt`                                       |
|---------------------------------------------------------------------------|----------------------------------------------------|
| <pre>8<br>[b!cvmcv"</pre>                                                 | <pre>Za bulbu!</pre>                               |
| <pre>2020<br>Jvsvuls'Y&#124;mmz'{&#124;yulk'v&#124;{'{v'il'Kpl'Ohyk</pre> | <pre>Colonel Ruffs turned out to be Die Hard</pre> |

## Note

0 1 1 2 1 2 2 3 1 2 2 3 2 2 3 3 4

The eighth element is 1, respectively, to decrypt it, you need to shift 1 element to the left. [ -> Z, b -> a, etc.
