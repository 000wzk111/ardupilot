#include "Copter.h"

// 模式初始化：切换到该模式时执行一次，返回true表示初始化成功
bool ModeSquare::init(bool ignore_checks) {
    // 可添加初始化逻辑（如记录起飞点、设定边长等），空实现也可正常编译
    return true;
}

// 模式主循环：飞控每400Hz执行一次，核心飞行逻辑写在这里
void ModeSquare::run() {
    // 示例：基础定高悬停（可替换为正方形飞行逻辑）
    copter.hover();
}

// 模式名称：地面站、日志显示用
const char* ModeSquare::name() const {
    return "SQUARE";
}