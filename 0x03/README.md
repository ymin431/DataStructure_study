# 0x03 배열

## 배열

> **메모리 상에 원소를 연속하게 배치한 자료구조**

> [!NOTE]  
> 원래 배열은 선언한 뒤 길이를 변경할 수 없으나 자료구조에선 가능하다고 가정

### 성질

1. O(1)에 k번째 원소를 확인/변경 가능
2. 추가적으로 소모되는 메모리의 양(=overhead)가 거의 없음
3. Cache hit rate(캐시 적중률)가 높음
   - _캐시 적중률_ : 명령이나 자료를 찾기 위해 캐시 메모리에 접근함
     원하는 정보가 캐시 메모리에 있을 때는 적중(hit), 아닐 때는 실패  
     (적정률) = (적중횟수) / (총 접근횟수)  
     즉, 컴퓨터 성능 나타내는 척도 (0.95~0.99 사이 일 때 우수)

---

#### 연습문제

- [ ] 10808 : [알파벳 개수](https://www.acmicpc.net/problem/10808)

#### 기본 문제

- [ ] 2577 : [숫자의 개수](https://www.acmicpc.net/problem/2577)
- [ ] 1475 : [방 번호](https://www.acmicpc.net/problem/1475)
- [ ] 3273 : [두 수의 합](https://www.acmicpc.net/problem/3273)
- [ ] 10807 : [개수 세기](https://www.acmicpc.net/problem/10807)
- [ ] 13300 : [방 배정](https://www.acmicpc.net/problem/13300)
- [ ] 11328 : [Strfry](https://www.acmicpc.net/problem/11328)
- [ ] 1919 : [애너그램 만들기](https://www.acmicpc.net/problem/1919)
