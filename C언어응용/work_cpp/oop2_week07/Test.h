#pragma once

class Test {
public:
	// static int a;
	inline static int a = 10;
	// ���� Old Style ������ 5����, 11���� �� ���� ��� �����ߴ� �ڵ尡
	// 17���� Modern Style ������ �� �ٷ� ��� �����ϴ�.
};

// int Test::a = 10;
