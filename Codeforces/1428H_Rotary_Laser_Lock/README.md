# [1428H. Rotary Laser Lock](https://codeforces.com/problemset/problem/1428/H)

---

## Examples

### Example 1

**Input:**
```
3 4

4

4

3
```

**Output:**
```
? 0 1

? 2 -1

? 1 1

! 1 5
```

## Constraints

**Limits:**

- Time: 1 second
- Memory: 256 megabytes

**Input:**

The first line consists of 2 integers $$$n$$$ and $$$m$$$ $$$(2 \leq n \leq 100, 2 \leq m \leq 20)$$$, indicating the number of rings and the number of sections each ring covers.

## Interaction

To perform a rotation, print on a single line "? x d" where $$$x$$$ $$$(0 \leq x  \lt  n)$$$ is the ring that you wish to rotate and $$$d$$$ $$$(d \in \{-1,1\})$$$ is the direction that you would like to rotate in. $$$d=1$$$ indicates a clockwise rotation by $$$1$$$ section while $$$d=-1$$$ indicates an anticlockwise rotation by $$$1$$$ section.

For each query, you will receive a single integer $$$a$$$: the number of lasers that are not blocked by any of the arcs after the rotation has been performed.

Once you have figured out the relative positions of the arcs, print ! followed by $$$n-1$$$ integers $$$p_1, p_2, \ldots, p_{n-1}$$$.

Do note that the positions of the rings are predetermined for each test case and won't change during the interaction process.

After printing a query do not forget to output the end of line and flush the output. Otherwise, you will get Idleness limit exceeded verdict.

To do this, use:

Hacks:

To hack, use the following format of test:

The first line should contain two integers $$$n$$$ and $$$m$$$.

The next line of should contain $$$n-1$$$ integers $$$p_1,p_2,\ldots,p_{n-1}$$$: relative positions of rings $$$1,2,\ldots,n-1$$$.

## Note

For the first test, the configuration is the same as shown on the picture from the statement.

After the first rotation (which is rotating ring $$$0$$$ clockwise by $$$1$$$ section), we obtain the following configuration:



After the second rotation (which is rotating ring $$$2$$$ counter-clockwise by $$$1$$$ section), we obtain the following configuration:



After the third rotation (which is rotating ring $$$1$$$ clockwise by $$$1$$$ section), we obtain the following configuration:



If we rotate ring $$$0$$$ clockwise once, we can see that the sections ring $$$0$$$ covers will be the same as the sections that ring $$$1$$$ covers, hence $$$p_1=1$$$.

If we rotate ring $$$0$$$ clockwise five times, the sections ring $$$0$$$ covers will be the same as the sections that ring $$$2$$$ covers, hence $$$p_2=5$$$.

Note that if we will make a different set of rotations, we can end up with different values of $$$p_1$$$ and $$$p_2$$$ at the end.

---

## Solution

**Language:** cpp

**Submitted:** 01/03/2026, 13:54:10
