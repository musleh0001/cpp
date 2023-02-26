<div align="center">
    <h1>C++</h1>
</div>

#### Why C++ ?

- Systems programmings

- Games

- Critical infrastructure

### .vscode/settings.json

```json
{
    "files.associations": {
        "iostream": "cpp"
    },
    "[cpp]": {
        "editor.formatOnSave": false
    },
    "code-runner.executorMap": {
        "c": "cd $dir && clang $fileName" 
                "-o compiled/$fileNameWithoutExt"
                "&& $dir/compiled/$fileNameWithoutExt",
        "cpp": "cd $dir && clang++ $fileName" 
                "-o compiled/$fileNameWithoutExt"
                "&& $dir/compiled/$fileNameWithoutExt"
    }
}
```

### Data Types

| Primitive                                          | Derived   | User-defined |
|:--------------------------------------------------:|:---------:|:------------:|
| Integer(signed[4], unsigned[4], long[8], short[2]) | Function  | Class        |
| Float                                              | Array     | Structure    |
| Character                                          | Pointer   | Union        |
| Boolean                                            | Reference | Enum         |

### Taking input from file and output to file

```c
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);    
#endif
```

#### Combinations

$$
nCr = n! / (n - r)! * r!
$$

#### Factorial

$$
n * (n - 1) * (n - 2) * (n - 3) * ... * (n - 1) * 1
$$

#### Pascal Triangle

$$
T(i,j) = iCj
= i! / (i - j)! * j!
$$

#### Sum of first n natural numbers

$$
S = n(n + 1) / 2
$$

##### String input

```c
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main () {
    string s1;
    string s2 = "test";
    string s3(5, 'm');

    // user input with space
    getline(cin, s1);

    // concat
    s1.append(s2)

    s1 += s2;

    // clear variable
    s2.clear();
        
    cout << s1[1] << endl;
    cout << s1 + s2 << endl;

    // check string is empty
    s1.empty();

    // erase char
    s1.erase(3, 3); // (index, total char)

    // find
    s1.find("com"); // return first index (value)

    // insert
    s1.insert(2, "nxt"); // (index, value)

    // length
    s1.size(); // return len
    // or
    s1.length();

    // sub string
    s1.substr(6, 4); // (index, total char)

    // string to int
    string s = "124";
    int x = stoi(s);
    cout << x << endl;

    string s = to_string(x);
    cout << s << endl;

    // sort string
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}
```

#### Compare string

```c
#include<iostream>
#include<string>
using namespace std;

int main () {
    string s1 = "abc";
    string s2 = "abc";

    if (!s1.empty() && !s2.empty() && !s1.compare(s2)) {
        cout << "Same" << endl;
    } else {
        cout << "not same" << endl;
    }

    return 0;
}
```
