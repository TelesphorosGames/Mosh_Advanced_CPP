#pragma once
#include <string>


using namespace std;

template<typename K, typename V>
class Pair
{
public:
     Pair() = default;
     Pair(const K& key, const V& value);
    
     K key() const;
     void set_key(const K& key);
     V value() const;
     void set_value(const V& value);


private:
    
    K Key;
    V Value{};

   
};

template<typename K, typename V>
Pair<K,V>::Pair(const K& key, const V& value)
          : Key(key),
            Value(value)
{
    
}

template<typename K, typename V>
K Pair<K,V>::key() const
{
    return Key;
}

template<typename K, typename V>
void Pair<K,V>::set_key(const K& key)
{
    Key = key;
}

template<typename K, typename V>
V Pair<K,V>::value() const
{
    return Value;
}

template<typename K, typename V>
void Pair<K,V>::set_value(const V& value)
{
    Value = value;
}