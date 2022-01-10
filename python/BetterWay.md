## Better Way 01: 사용 중인 파이썬의 버전을 알아두라

## Better Way 02: PEP 8 스타일 가이드를 따르라
Python Enhenced Proposal의 약자.

## Better Way 03: bytes와 str의 차이를 알아두라
파이썬 문자열 데이터의 시퀀스를 표현하는 타입으로 bytes와 str이 있다.<br>
bytes와 str의 인스턴스는 서로 호환되지 않기 때문에 전달 중인 문자 시퀀스가 어떤 타입인지를 잘 알고 있어야 함.
``` python
print(b'one'+b'two') #bytes 연산
print('one'+'two') #str 연산
```
## Better Way 04: f-문자열을 통한 인터폴레이션을 사용하라.
