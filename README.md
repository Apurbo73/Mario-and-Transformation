# Mario-and-Transformation

Mario and Transformation
Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating 
X
X mushrooms.

Input Format
The first line of input will contain one integer 
T
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer 
X
X.
Output Format
For each test case, output in a single line Mario's size after eating 
X
X mushrooms.

Print:

NORMAL
NORMAL, if his final size is normal.
HUGE
HUGE, if his final size is huge.
SMALL
SMALL, if his final size is small.
You may print each character of the answer in either uppercase or lowercase (for example, the strings 
Huge
Huge, 
hUgE
hUgE, 
huge
huge and 
HUGE
HUGE will all be treated as identical).

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
X
≤
100
1≤X≤100
Sample 1:
Input
Output
3
2
4
12
SMALL
HUGE
NORMAL




Here's the C++ code that solves the problem as described:

```cpp
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        // Mario's transformation cycle: NORMAL -> HUGE -> SMALL -> NORMAL ...
        int state = X % 3;

        if (state == 0) {
            cout << "NORMAL" << endl;
        } else if (state == 1) {
            cout << "HUGE" << endl;
        } else if (state == 2) {
            cout << "SMALL" << endl;
        }
    }

    return 0;
}
```

### Explanation:

* Mario starts at `NORMAL`.
* The transformations follow a cycle of 3 states: `NORMAL → HUGE → SMALL → NORMAL`.
* So after `X` mushrooms, the state can be found using `X % 3`:

  * `0` → NORMAL
  * `1` → HUGE
  * `2` → SMALL

### Sample Input:

```
3
2
4
12
```

### Sample Output:

```
SMALL
HUGE
NORMAL
```

