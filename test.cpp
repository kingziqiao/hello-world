#include<bits/stdc++.h>
//#include"hash_set"
#include"unordered_set"
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	Solution(char *pData = nullptr)
	{
		this->m_pData = pData;
	}
	Solution(const Solution &str)
	{
	}
	virtual ~Solution()
	{

	}
	
	Solution& operator=(const Solution &str)
	{
		if (&str != this)
		{
			Solution tmp(str);
			char *p = tmp.m_pData;
			tmp.m_pData = m_pData;
			m_pData = p;
		}
		return *this;
	}
private:
	char *m_pData;
};

int GetSize(int data[])
{
	data = data + 5;
	return sizeof(data);
}
int main()
{
	int data[] = { 1,2,3 };
	int size1 = GetSize(data);
	cout << size1 << endl;
	cout << sizeof(Solution) << endl;
	string str = "cbbd";
	Solution s;
	//string ans = s.longestPalindrome(str);
	//cout << ans << endl;
	system("pause");
	return 0;
}