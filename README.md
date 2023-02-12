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

```cpp
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
