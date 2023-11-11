# lede_compile

自用 lede x86_64 编译 文件记录📝

默认登陆IP 192.168.6.1

若要修改路由器管理地址,可自行修改文件 `/etc/config/network`

web端登录

用户名: lanyun

密码: password

ssh登录

用户名: root

密码: password

建议修改这2个账户密码.注: web端不支持root用户登录.

博客文章链接🔗: https://lanyundev.com/posts/5f76a740

~~可有偿帮助编译.(看情况)~~

 [Releases](https://github.com/LanYunDev/lede_compile/releases) 含 `staging_dir` `build_dir` `bin` `dl` 目录压缩包.

新增: `udp2raw` 和 `speederv2` 动态编译成品二进制文件.(非静态编译.)

无特别说明,编译时均为最新版.

至于编译了什么进去,懒的描述,自行看`.config`文件📃.

成品,工具链,sdk可看 `bin.7z` 压缩包.

