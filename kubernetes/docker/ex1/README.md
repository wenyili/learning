https://coolshell.cn/articles/17010.html

## UTS Namespace

修改hostname

## IPC Namespace

测试

在host用`ipcmk -Q`创建一个IPC的Queue，分别在添加IPC Namespace前后，使用`ipcs -q`查看Queue

```
hchen@ubuntu:~$ ipcmk -Q 
Message queue id: 0
```

添加IPC Namespace前

``` 
hchen@ubuntu:~$ ipcs -q
------ Message Queues --------
key        msqid      owner      perms      used-bytes   messages    
0xd0d56eb2 0          hchen      644        0            0
```

添加后

```
root@container:~/linux_namespace# ipcs -q
 
------ Message Queues --------
key        msqid      owner      perms      used-bytes   messages
```

## PID Namespace

getpid()获取到的pid为1。
但是通过ps,top看到的还是所有进程。因为ps,top会去读/proc文件系统。所以还需要做文件系统隔离。

## Mount Namespace


