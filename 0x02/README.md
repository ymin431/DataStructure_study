# 0x02 기초 코드 작성 요령 II

## 함수 인자

### int

- 값 복사
- 원본 영향 X

### int 배열

- 배열의 주소를 넘겨줌
- 원본 영향 O

### 구조체

- 값 복사
- 원본 영향 X

### 참조자 (Reference)

- 원본 영향 O
- C에서는 포인터와 거의 비슷한 기능을 함

### STL

- 값 복사
- 원본 영향 X

> 쌩으로 크기가 N인 벡터 인자로 넘기면 시간 복잡도 O(N)  
> but, 참조자를 이용하면 시간 복잡도 O(1)

## 표준 입출력

> [!NOTE]
> scanf와 cin 둘 다 공백을 포함한 문자열을 입력받을 때 껄끄러움  
> → 공백 앞까지만 입력받기 때문  
> 그러므로 **getline**을 사용하자!! (C++ string이어야만 함)

### scanf / printf

- C++ string 처리 불가

### cin / cout

#### 입출력으로 인한 시간 초과 막기

```cpp
ios::sync_with_stdio(0);
```

- 코드의 흐름이 실제 출력과 동일하기 위해서 기본적으로 C++ stream과 C stream을 동기화함
- C++ stream만 쓸거라면 굳이 두 stream을 동기화할 필요 X
- 따라서 동기화를 끊어버림
- 동기화를 끊었으므로 절대 cout과 printf를 섞어 쓰면 안됨 (→ 코드 출력 순서 꼬일 수 O)
- 인자는 bool type인 `false`가 맞으나 편의상 `0` 사용

```cpp
cin.tie(0);
```

- 출력 버퍼에 문자가 임시로 저장되었다가 버퍼가 비워지며 화면에 보여짐
- 입력에도 버퍼가 있는데 바로바로 넘겨주지 않고 어느정도 모았다가 넘겨줌
- 입력과 출력이 번갈아 나오는 경우 버퍼의 존재로 인해 순서가 꼬일 수 O
- 그래서 보통 cin 명령 수행하기 전 cout 버퍼를 비움
- but, 온라인 저지 사이트에선 채점할 때 출력 글자만 확인함
- 즉, 입력 글자와 출력 글자 사이에 순서가 꼬여도 채점에 영향 X
- 따라서 cin 명령 수행 전 cout 버퍼 비우는 것을 막음
- 인자는 `nullptr`이지만 편의상 `0`

> [!NOTE]  
> **endl 사용 X**  
> endl은 개행문자를 출력하고 출력 버퍼를 비움  
> 중간 중간 버퍼를 비울 필요 X  
> 따라서, 줄 바꿈이 필요하면 개행문자 넣기!!!

---

#### 연습문제

- [x] 10871 : [X보다 작은 수](https://www.acmicpc.net/problem/10871)

#### 기본문제

- [x] 1000 : [A+B](https://www.acmicpc.net/problem/1000)
- [x] 2557 : [Hello World](https://www.acmicpc.net/problem/2557)
- [x] 10171 : [고양이](https://www.acmicpc.net/problem/10171)
- [x] 10869 : [사칙연산](https://www.acmicpc.net/problem/10869)
- [x] 9498 : [시험 성적](https://www.acmicpc.net/problem/9498)
- [x] 2752 : [세수정렬](https://www.acmicpc.net/problem/2752)
- [x] 2753 : [윤년](https://www.acmicpc.net/problem/2753)
- [x] 2480 : [주사위 세개](https://www.acmicpc.net/problem/2480)
- [x] 2490 : [윷놀이](https://www.acmicpc.net/problem/2490)
- [x] 2576 : [홀수](https://www.acmicpc.net/problem/2576)
- [x] 2587 : [대표값2](https://www.acmicpc.net/problem/2587)
- [x] 2309 : [일곱 난쟁이](https://www.acmicpc.net/problem/2309)
- [x] 10093 : [숫자](https://www.acmicpc.net/problem/10093)
- [x] 1267 : [핸드폰 요금](https://www.acmicpc.net/problem/1267)
- [x] 10804 : [카드 역배치](https://www.acmicpc.net/problem/10804)
- [x] 15552 : [빠른 A+B](https://www.acmicpc.net/problem/15552)
- [ ] 2438 : [별 찍기 - 1](https://www.acmicpc.net/problem/2438)
- [ ] 2439 : [별 찍기 - 2](https://www.acmicpc.net/problem/2439)
- [ ] 2440 : [별 찍기 - 3](https://www.acmicpc.net/problem/2440)
- [ ] 2441 : [별 찍기 - 4](https://www.acmicpc.net/problem/2441)
- [ ] 2442 : [별 찍기 - 5](https://www.acmicpc.net/problem/2442)
- [ ] 2443 : [별 찍기 - 6](https://www.acmicpc.net/problem/2443)
- [ ] 2444 : [별 찍기 - 7](https://www.acmicpc.net/problem/2444)
- [ ] 2445 : [별 찍기 - 8](https://www.acmicpc.net/problem/2445)
- [x] 2446 : [별 찍기 - 9](https://www.acmicpc.net/problem/2446)
- [x] 2562 : [최댓값](https://www.acmicpc.net/problem/2562)
