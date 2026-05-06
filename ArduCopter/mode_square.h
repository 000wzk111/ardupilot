#pragma once
#include "mode.h"

// 自定义模式类，必须继承Mode基类
class ModeSquare : public Mode {
public:
    using Mode::Mode;

    // ✅ 必须完整实现基类的3个纯虚函数（少一个就是抽象类，编译必报错）
    // 函数签名必须和基类完全一致，否则override失败
    bool init(bool ignore_checks = false) override;  // 模式初始化
    void run() override;                               // 模式主循环（核心逻辑）
    const char* name() const override;                 // 模式名称（地面站显示）
};