# lede_compile

自用 lede x86_64 编译 文件记录📝

默认登陆IP 192.168.6.1

若要修改路由器管理地址,可自行修改文件 `/etc/config/network`

web端登录

用户名: lanyun

密码: password

注: 登录后尽快修改密码.(去 系统 -> 管理权中修改主机密码)

ssh登录

端口: 333

用户名: lanyun

密码默认为空且默认禁止空密码登录.

若要进行ssh登录,可登录web端进入Luci,在 系统 -> TTYD 终端 中使用命令`passwd`修改密码 或者 去 系统 -> 管理权中添加公钥.(貌似修改主机密码也行.)

注: 推荐添加公钥的方式来登录ssh,不计划在编译中添加ssh密码.

博客文章链接🔗: https://lanyundev.com/posts/5f76a740

~~可有偿帮助自定义编译.(看money情况)~~

 [Releases](https://github.com/LanYunDev/lede_compile/releases) 一般情况下包含 `staging_dir` `build_dir` `bin` `dl` 等目录压缩包.

新增: `udp2raw` 和 `speederv2` 动态编译成品二进制文件.(非静态编译.)

无特别说明,编译时均为最新版.

至于编译了什么进去,懒的描述,自行看`.config`文件📃.

成品,工具链,sdk可看 `bin` 压缩包.

注: 若无额外说明,压缩包均使用7z分卷压缩.

