/* This can be compiled with CopperSpice, Verdigris, or moc depending of the option passed  */


#ifdef USE_VERDIGRIS

#include <wobjectimpl.h>

#define CS_OBJECT(X) W_OBJECT(X)
#define CS_OBJECT_MULTIPLE(X,XX) W_OBJECT(X)
#define CS_SLOT_1(XX,...) __VA_ARGS__;
#define CS_SLOT_2(X) W_SLOT(X)
#define CS_SIGNAL_1(XX,...) __VA_ARGS__
#define CS_SIGNAL_2(...) W_SIGNAL(__VA_ARGS__)
#define CS_INTERFACES(XX) Q_INTERFACES(XX)

#elif defined(USE_QT)

#define CS_OBJECT(X) Q_OBJECT
#define CS_OBJECT_MULTIPLE(X,XX) Q_OBJECT
#define CS_SLOT_1(XX,...) Q_SLOT __VA_ARGS__;
#define CS_SLOT_2(...)
#define CS_SIGNAL_1(XX,...) Q_SIGNAL __VA_ARGS__;
#define CS_SIGNAL_2(...)
#define CS_INTERFACES(XX) Q_INTERFACES(XX)

#endif

#ifndef W_OBJECT_IMPL
#define W_OBJECT_IMPL(XXX)
#endif

#include <QObject>

class Object1 : public QObject {
    CS_OBJECT(Object1)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};

W_OBJECT_IMPL(Object1)

class Object2 : public QObject {
    CS_OBJECT(Object2)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};

W_OBJECT_IMPL(Object2)

class Object3 : public QObject {
    CS_OBJECT(Object3)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object3)

class Object4 : public QObject {
    CS_OBJECT(Object4)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object4)

class Object5 : public QObject {
    CS_OBJECT(Object5)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object5)

class Object6 : public QObject {
    CS_OBJECT(Object6)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object6)

class Object7 : public QObject {
    CS_OBJECT(Object7)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object7)

class Object8 : public QObject {
    CS_OBJECT(Object8)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object8)

class Object9 : public QObject {
    CS_OBJECT(Object9)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object9)

class Object10 : public QObject {
    CS_OBJECT(Object10)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object10)

class Object11 : public QObject {
    CS_OBJECT(Object11)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object11)

class Object12 : public QObject {
    CS_OBJECT(Object12)

public:
    CS_SLOT_1(Public, void slot0001(int))
    CS_SLOT_2(slot0001)
    CS_SLOT_1(Public, void slot0002(int))
    CS_SLOT_2(slot0002)
    CS_SLOT_1(Public, void slot0003(int))
    CS_SLOT_2(slot0003)
    CS_SLOT_1(Public, void slot0004(int))
    CS_SLOT_2(slot0004)
    CS_SLOT_1(Public, void slot0005(int))
    CS_SLOT_2(slot0005)
    CS_SLOT_1(Public, void slot0006(int))
    CS_SLOT_2(slot0006)
    CS_SLOT_1(Public, void slot0007(int))
    CS_SLOT_2(slot0007)
    CS_SLOT_1(Public, void slot0008(int))
    CS_SLOT_2(slot0008)
    CS_SLOT_1(Public, void slot0009(int))
    CS_SLOT_2(slot0009)
    CS_SLOT_1(Public, void slot0010(int))
    CS_SLOT_2(slot0010)
    CS_SLOT_1(Public, void slot0011(int))
    CS_SLOT_2(slot0011)
    CS_SLOT_1(Public, void slot0012(int))
    CS_SLOT_2(slot0012)
    CS_SLOT_1(Public, void slot0013(int))
    CS_SLOT_2(slot0013)
    CS_SLOT_1(Public, void slot0014(int))
    CS_SLOT_2(slot0014)
    CS_SLOT_1(Public, void slot0015(int))
    CS_SLOT_2(slot0015)
    CS_SLOT_1(Public, void slot0016(int))
    CS_SLOT_2(slot0016)
    CS_SLOT_1(Public, void slot0017(int))
    CS_SLOT_2(slot0017)
    CS_SLOT_1(Public, void slot0018(int))
    CS_SLOT_2(slot0018)
    CS_SLOT_1(Public, void slot0019(int))
    CS_SLOT_2(slot0019)

    CS_SIGNAL_1(Public, void signal0001(int arg))
    CS_SIGNAL_2(signal0001, arg)
    CS_SIGNAL_1(Public, void signal0002(int arg))
    CS_SIGNAL_2(signal0002, arg)
    CS_SIGNAL_1(Public, void signal0003(int arg))
    CS_SIGNAL_2(signal0003, arg)
    CS_SIGNAL_1(Public, void signal0004(int arg))
    CS_SIGNAL_2(signal0004, arg)
    CS_SIGNAL_1(Public, void signal0005(int arg))
    CS_SIGNAL_2(signal0005, arg)
    CS_SIGNAL_1(Public, void signal0006(int arg))
    CS_SIGNAL_2(signal0006, arg)
    CS_SIGNAL_1(Public, void signal0007(int arg))
    CS_SIGNAL_2(signal0007, arg)
    CS_SIGNAL_1(Public, void signal0008(int arg))
    CS_SIGNAL_2(signal0008, arg)
    CS_SIGNAL_1(Public, void signal0009(int arg))
    CS_SIGNAL_2(signal0009, arg)
    CS_SIGNAL_1(Public, void signal0010(int arg))
    CS_SIGNAL_2(signal0010, arg)
    CS_SIGNAL_1(Public, void signal0011(int arg))
    CS_SIGNAL_2(signal0011, arg)
    CS_SIGNAL_1(Public, void signal0012(int arg))
    CS_SIGNAL_2(signal0012, arg)
    CS_SIGNAL_1(Public, void signal0013(int arg))
    CS_SIGNAL_2(signal0013, arg)
    CS_SIGNAL_1(Public, void signal0014(int arg))
    CS_SIGNAL_2(signal0014, arg)
    CS_SIGNAL_1(Public, void signal0015(int arg))
    CS_SIGNAL_2(signal0015, arg)
    CS_SIGNAL_1(Public, void signal0016(int arg))
    CS_SIGNAL_2(signal0016, arg)
    CS_SIGNAL_1(Public, void signal0017(int arg))
    CS_SIGNAL_2(signal0017, arg)
    CS_SIGNAL_1(Public, void signal0018(int arg))
    CS_SIGNAL_2(signal0018, arg)
    CS_SIGNAL_1(Public, void signal0019(int arg))
    CS_SIGNAL_2(signal0019, arg)
};
W_OBJECT_IMPL(Object12)


#if defined (USE_QT)
#include "moc_compile.h"
#endif


/*

 $CXX compile.cpp -I $CS_HOME/include -I $CS_HOME/include/QtCore -std=c++14 -O2 -c -o /dev/null

 $CXX compile.cpp -I/usr/include/qt -I/usr/include/qt/QtCore -std=c++14 -O2 -fPIC -c -o /dev/null -I../../src -DUSE_VERDIGRIS

 moc compile.cpp -I/use/include/qt -I/usr/include/qt/QtCore -o moc_compile.h -DUSE_QT
 $CXX compile.cpp -I/usr/include/qt -I/usr/include/qt/QtCore -std=c++14 -O2 -fPIC -c -o /dev/null -DUSE_QT

 */