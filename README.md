# MathFunc
### About
MathFunc is a library for providing some mathematical functions. It provides six different functions to perform mathematical operations. It is available in two different programming languages: one in C and the other in Racket.

### Library Import
#### C Version
```C
#include "mathfunc.h"
```
#### Racket Version
```Racket
(require "mathfunc.rkt")
```

### Usage
#### Maximum of Two Integers
##### C Version
```C
max2(a, b);
```
##### Racket Version
```Racket
(max2 a b)
```
##### Parameters
| Parameter    | Type    | Required   | Description                               |
|:-------------|:--------|:-----------|:------------------------------------------|
|**a**         | Int     | Yes        | None                                      |
|**b**         | Int     | Yes        | None                                      |
##### Response
| Field Name     | Type    | Description                 |
|:---------------|:--------|:----------------------------|
|**max**         | Int     | Maximum of a and b          |

#### Minimum of Two Integers
##### C Version
```C
min2(a, b);
```
##### Racket Version
```Racket
(min2 a b)
```
##### Parameters
| Parameter    | Type    | Required   | Description                               |
|:-------------|:--------|:-----------|:------------------------------------------|
|**a**         | Int     | Yes        | None                                      |
|**b**         | Int     | Yes        | None                                      |
##### Response
| Field Name     | Type    | Description                 |
|:---------------|:--------|:----------------------------|
|**min**         | Int     | Minimum of a and b          |

#### Maximum Factor of An Integer
##### C Version
```C
maxfactor(a);
```
##### Racket Version
```Racket
(maxfactor a)
```
##### Parameters
| Parameter    | Type    | Required   | Description                               |
|:-------------|:--------|:-----------|:------------------------------------------|
|**a**         | Int     | Yes        | An integer of at least 2                  |
##### Response
| Field Name     | Type    | Description                                             |
|:---------------|:--------|:--------------------------------------------------------|
|**max factor**  | Int     | Maximum factor of a between 0 and a exclusively         |

#### Test Whether Two Integers Are Coprime
##### C Version
```C
coprime(a, b);
```
##### Racket Version
```Racket
(coprime a b)
```
##### Parameters
| Parameter    | Type    | Required   | Description                               |
|:-------------|:--------|:-----------|:------------------------------------------|
|**a**         | Int     | Yes        | An integer of at least 1                  |
|**b**         | Int     | Yes        | An integer of at least 1                  |
##### Response
| Field Name      | Type    | Description                                             |
|:----------------|:--------|:--------------------------------------------------------|
|**is coprime?**  | Bool    | None                                                    |

### License
* MathFunc is licensed under the [MIT license](https://github.com/elailai94/MathFunc/blob/master/LICENSE.md).
