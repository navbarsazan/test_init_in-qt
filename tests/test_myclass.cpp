#include <QtTest/QtTest>
#include "../src/MyClass.h"

class TestMyClass : public QObject {
    Q_OBJECT

private slots:
    void testChecksum() {
        MyClass obj;
        QString testString = "PBC";
        int result = obj.calculateChecksum(testString);  // محاسبه چک‌سام رشته "ABC"
        int expectedChecksum = 65 + 66 + 67;  // چک‌سام مورد انتظار
        QCOMPARE(result, expectedChecksum);  // مقایسه چک‌سام محاسبه شده با مقدار مورد انتظار
    }
};

QTEST_MAIN(TestMyClass)
#include "test_myclass.moc"
