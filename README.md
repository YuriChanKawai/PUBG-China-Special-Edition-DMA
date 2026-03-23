# ⚡️ PUBG-China-Special-Edition-DMA

![GitHub license](https://img.shields.io/github/license/YuriChanKawai/PUBG-China-Special-Edition-DMA?style=for-the-badge)
![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue?style=for-the-badge&logo=c%2B%2B)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey?style=for-the-badge&logo=windows)

基于 **Direct Memory Access (DMA)** 硬件技术的内存处理方案，专注于底层数据同步与高性能渲染。

---

## 🚀 项目特性

* **硬件级通信**：利用 DMA 硬件绕过系统层级，实现极低延迟的内存存取。
* **双机架构**：支持在辅助机（Second PC）独立运行，保持主电脑环境纯净。
* **高性能 UI**：集成 **ImGui** 定制化界面，支持热键交互与实时状态显示。
* **模块化设计**：核心 DMA 逻辑与业务逻辑完全解耦，方便二次开发与偏移量更新。

## 🛠️ 技术栈

* **语言**: Modern C++ (C++17/20)
* **内存框架**: PCILEECH / MemProcFS 兼容
* **图形渲染**: DirectX 11 / ImGui
* **开发环境**: Visual Studio 2022

## 📂 项目结构

```text
├── src/                # 核心源代码
│   ├── dma/            # DMA 读写封装与初始化
│   ├── overlay/        # ImGui 渲染、窗口管理与 UI 逻辑
│   └── utils/          # 偏移量管理、日志记录与工具类
├── include/            # 项目头文件
├── .gitignore          # Git 忽略配置（已过滤编译生成文件）
└── README.md           # 项目说明文档
