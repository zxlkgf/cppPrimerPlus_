1. 派生类从基类那里继承了什么？
基类的公共成员变量成为派生类的公共成员变量。基类的保护成员变量成为派生类的保护成员变量，基类的私有成员被继承但不可访问。

---

2. 派生类不能从基类那里继承什么？
构造方法，析构方法，拷贝构造方法，友元

---

3. 假设baseDMA::operator=()函数的返回类型为void而非baseDMA &,有什么后果？如果返回类型为baseDMA，有什么后果？
函数的返回类型为void 可以使用单个赋值，但是不可以使用链式赋值  
如果返回baseDMA，会使生成速度减慢，而且还会造成地址值拷贝的问题。  

---

4. 创建和删除派生类对象时,构造函数和析构函数的调用顺序是?
基类构造-->派生类构造-->派生类析构-->基类析构  

---

5. 如何派生类没有添加任何书籍成员，它是否需要构造函数？
需要。

---

6. 如果基类和派生类定义了同名方法，当派生类对象调用该方法时，被调用的是哪个方法？
派生类方法被调用。  
如果派生类未定义方法或使用基类的作用域解析运算符调用方法会调用基类的方法。  

---

7. 什么情况下，派生类应定义赋值运算符？
默认赋值运算符失效的情况下。准确来说某些变量需要new的时候。

---

8. 可以将派生类对象的地址赋给基类指针么？可以将基类对象的指针赋给派生类指针么？
将派生类对象的地址赋给基类指针  向上转型  
将基类对象的指针赋给派生类指针  向下强转  

---

9. 可以将派生类对象赋给基类对象么？可以将基类对象赋给派生类对象么？
派生类对象赋给基类对象  可以  基类拷贝构造  
基类对象赋给派生类对象  可以  派生类拷贝构造  

---

10. 假设定义了一个函数，它将基类对象的引用作为参数，为什么该函数也可以将派生类对象作为参数。
废话。向上转型  

---

11. 假设定义了一个函数，它将基类对象作为参数。为什么该函数也可以将派生类对象作为参数
废话，参考9

---

12. 为什么通常按引用传递对象比按值传递效率高？
复制不要时间哇？

---

13. 假设Corporation是基类，PublicCorporation是派送类。两个类都定义了head。ph是指向Corporation的指针。且被赋值了一个publicCorporation对象的地址。如果基类将head()
定义为：  
则ph->head()如何解释:  
a. 常规非虚函数  
Corporation->head();  
b. 虚函数  
publicCorporation->head();   

---

14. 下述代码有什么问题。
```cpp
class Kitchen
{
    private:
    double kit_sq_ft;
    public:
    Kitchen(){kit_sq_ft = 0.0;}
    virtual double area() const {return kit_sq_ft * kit_sq_ft;}
};

class House: public Kitchen
{
private:
    double all_sq_ft;
public:
    House(){all_sq_ft += kit_sq_ft};
    double area(const char * s) const { cout <<s; return all_sq_fd;}
};
```

area方法冲突 基类的被隐藏
house包含kitchen 但是不可继承kitchen  


