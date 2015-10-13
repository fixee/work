/**
 * Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode *next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        struct ListNode *next = node->next;

        node->val = next->val;
        node->next = next->next;
        delete next;
    }
};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode x(0);
        x.next = head;
        struct ListNode *prev = &x;
        struct ListNode *node = prev->next;

        while( node != NULL )
        {
            if( node->val == val )
            {
                prev->next = node->next;
                delete node;
            }
            else
            {
                prev = node;
            }

            node = prev->next;
        }

        return x.next;
    }

};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
                        
    }
};


// mising number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();

        for( int i = 0; i < size; i++ )
        {
            sum += nums[i];
        }

        return size * ( size - 1 ) / 2 - sum;
    }
};


// find Duplicate
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int min = 1, max = size - 1, mid;
        int cnt = 0, accu = 0;
        while( min <= max )
        {
            mid = ( min + max ) /2;
            cnt = 0;
            accu = 0;
            for( int i = 0; i < size; i++ )
            {
                if( nums[i] == mid && ++accu > 1)
                {
                    return mid;
                }

                if( nums[i] < mid )
                    cnt++;
            }

            if( cnt <= mid - 1 )
                min = mid + 1;
            else
                max = mid - 1;
        }
        return mid;
    }
};


//cycle link
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
                        
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        while( n > 1 )
        {
            if( n % 2 !== 0 )
                return false;
            n = n / 2;
        }

        return n == 1;
    }
};


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        int tmp = 1;
        for( int i = 0; i < 32; i++ )
        {
            if( n & tmp )
                cnt++;
            tmp = tmp << 1;
        }

        return cnt;
    }
};


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t tmp1 = 1, tmp2 = 1;
        tmp2 <<= 31;
        uint32_t result = 0;
        for( int i = 0; i < 32; i++ )
        {
            if( n&tmp1 )
            {
                result &= tmp2;
            }

            tmp1 <<= 1;
            tmp2 >>= 1;
        }

        return result;
    }
};

//single number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for( int i = 0; i < nums.size(); i++ )
            num ^= nums[i];
        return num;
    }
};

//single number II
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    }
};

//single number III
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    }
};
