# prime_factorization
즐거운 소인수분해

![capture_result](https://user-images.githubusercontent.com/13804135/78217102-46fd3e80-74f6-11ea-97c0-114aa66db68b.png)

### 예외1
#### : 인자가 입력되지 않음.
=> No input data.
* * *
### 예외2
#### : 두 개 이상의 인자가 입력됨.
=> Too many factors.
* * *
### 예외3
#### : 인자에 문자가 포함되어 있음.
=> Not a valid number.
* * *
### 예외4
#### : 허용 범위를 벗어난 숫자 입력.
=> Out of range.
* * *
### 함수 구성
```
int argc_error(int argc);
```
> ➡ 인자의 개수에 따른 오류 판별함수. ex) 인자가 없거나, 두 개 이상일 때 error 반환.

```
unsigned int  atoui(char \*argv[]);
```
> ➡ 입력받은 인자를 unsigned int 형으로 변환하는 함수. 중간에 0~9 범위 밖의 문자가 등장하면 error 반환.

```
void	print_factors(unsigned int num);
```
> ➡ 소인수 분해 하면서 출력하는 함수.   
   tmp 변수에 이전 소인수를 저장해놓고, 현재 소인수와 중복되는지 검사하는 방법으로 한 번만 출력합니다.
```
int main(int argc, char *argv[]);
```
> ➡ main 함수
