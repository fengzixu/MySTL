//
// Created by 徐冉 on 15/12/13.
// email: hnustphoenix@163.com
//

#ifndef DEMO_UTILITY_XURAN_H
#define DEMO_UTILITY_XURAN_H

namespace xuran_std
{
    template <class T1, class T2>
    struct pair
    {
        typedef T1 firsttype;
        typedef T2 secondtype;

        T1 first;
        T2 second;

        //default constructor
        pair()
            : first(T1()), second(T1())
        {

        }

        //DIY constructor
        pair(const T1& a, const T2& b)
                : first(a), second(b)
        {

        }

        template <class U, class V> pair(const pair<U, V>& p)
        {
            if (this != &p)
            {
                first = p.first;
                second = p.second;
            }
        }

        template <class U, class V> pair& operator=(const pair<U, V>& p)
        {
            if (this != &p)
            {
                first = p.first;
                second = p.second;
            }
            return (*this);
        };
    };

    template <class T1, class T2> inline bool operator==
            (const pair<T1, T2>& a, const pair<T1, T2>& b)
    {
        return (a.first == b.first) && (a.second == b.second);
    };

    template <class T1, class T2> inline bool operator<
            (const pair<T1, T2>& a, const pair<T1, T2>& b)
    {
        return (a.first < b.first) || (!(a.first < b.first) && (a.second < b.second));
    };

    template <class T1, class T2> inline bool operator>
            (const pair<T1, T2>&a, const pair<T1, T2>& b)
    {
        return b < a;
    };

    template <class T1, class T2> inline bool operator<=
            (const pair<T1, T2>& a, const pair<T1, T2>& b)
    {
        return !(a > b);
    };

    template <class T1, class T2> inline bool operator>=
            (const pair<T1, T2>& a, const pair<T1, T2>& b)
    {
        return !(a < b);
    };

    template <class T1, class T2> inline pair<T1, T2> make_pair
            (const T1& first, const T2& second)
    {
        return pair<T1, T2>(first, second);
    };

    template <class T1, class T2> inline bool operator!=
            (const pair<T1, T2>& a, const pair<T1, T2>& b)
    {
        return !(a == b);
    };


}
#endif //DEMO_UTILITY_XURAN_H
