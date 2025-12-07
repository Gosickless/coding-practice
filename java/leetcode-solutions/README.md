此文档仅供编写代码时项目结构参考用
```
leetcode-solutions/
├── pom.xml
├── README.md
├── src/
│ ├── main/
│ │ └── java/
│ │ ├── problems/ # 按题号组织
│ │ │ ├── P0001_TwoSum/ # 添加P前缀避免数字开头问题
│ │ │ │ ├── Solution1.java
│ │ │ │ ├── Solution2.java
│ │ │ │ └── Problem.md
│ │ │ ├── P0002_AddTwoNumbers/
│ │ │ └── ...
│ │ ├── topics/ # 按题型组织（可选）
│ │ │ ├── array/
│ │ │ ├── linkedlist/
│ │ │ └── ...
│ │ ├── utils/ # 工具类
│ │ │ ├── ListNode.java
│ │ │ ├── TreeNode.java
│ │ │ └── TestUtils.java
│ │ └── Main.java # 主测试类
│ └── test/
│ └── java/ # 必须保留
│ └── problems/ # 测试代码
│ ├── P0001_TwoSumTest.java
│ └── ...
├── docs/ # 项目文档
│ ├── topics-index.md
│ ├── tags-index.md
│ └── statistics.md
└── scripts/ # 辅助脚本（可选）
└── create-problem.py
```