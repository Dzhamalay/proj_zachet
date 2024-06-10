## Laboratory work II

Part 1

Current task: 3

3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.

script:
```shell
$ touch examples/hello_world.cpp
```

script:
```shell
$ cat >  examples/hello_world.cpp <<EOF
> #include <iostream>

using namespace std;

int main()
{
        cout << "Hello World" << endl;
        return 0;
}
> EOF
```

_____
Current task: 4

4. Добавьте этот файл в локальную копию репозитория.

script:
```shell
$ git add examples/hello_world.cpp
```

____
Current task: 5

5. Закоммитьте изменения с осмысленным сообщением.

script:
```shell
$ git commit examples/hello_world.cpp -m "was added code that prints 'Hello World'"
[main 56e932a] was added code that prints 'Hello World'
 1 file changed, 9 insertions(+)
 create mode 100644 examples/hello_world.cpp
 ```

 
 ___
 Current task: 6
 
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

script:
```shell
$ nano examples/hello_world.cpp
```
 
 Current task: 7

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

script:
```shell
$ git commit -m "changed file hello_world.cpp"
[main 15021e7] changed file hello_world.cpp
 1 file changed, 5 insertions(+), 1 deletion(-)
```

_____
Current task: 8

8. Запуште изменения в удалёный репозиторий.

script:
```shell
$ git push -u origin_ main
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (8/8), 907 bytes | 907.00 KiB/s, done.
Total 8 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/Dzhamalay/lab02_3
   778a5cc..15021e7  main -> main
Branch 'main' set up to track remote branch 'main' from 'origin_'.
```


# Part 2

____
Current task: 1

1. В локальной копии репозитория создайте локальную ветку patch1.

script:
```shell
$ git branch patch1
$ git checkout patch1
Switched to branch 'patch1'
```

____
Current task: 2

2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.

script:
```shell
$ nano examples/hello_world.cpp
```

Current task: 3

3. commit, push локальную ветку в удалённый репозиторий.

script:
```shell
$ git add .
$ git commit -m "created new branch"
[patch1 d388df5] created new branch
 1 file changed, 3 insertions(+), 5 deletions(-)
$ git push -u origin_ patch1
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 468 bytes | 468.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/Dzhamalay/lab02_3/pull/new/patch1
remote: 
To https://github.com/Dzhamalay/lab02_3
 * [new branch]      patch1 -> patch1
Branch 'patch1' set up to track remote branch 'patch1' from 'origin_'.
```

____
Current task: 6

6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.

script:
```shell
$ nano examples/hello_world.cpp
```

 Current task: 7
 
 7. commit, push.

script:
```shell
$ git add .
$ git commit -m "added comments to file hello_world.cpp"
[patch1 7b9ff41] added comments to file hello_world.cpp
 1 file changed, 3 insertions(+), 3 deletions(-)
$ git push -u origin_ patch1
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 443 bytes | 443.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Dzhamalay/lab02_3
   d388df5..7b9ff41  patch1 -> patch1
Branch 'patch1' set up to track remote branch 'patch1' from 'origin_'.
```


10. Локально выполните pull.

script:
```shell
$ git pull
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (1/1), 889 bytes | 889.00 KiB/s, done.
From https://github.com/Dzhamalay/lab02_3
   15021e7..7b74a36  main       -> origin_/main
Your configuration specifies to merge with the ref 'refs/heads/patch1'
from the remote, but no such ref was fetched.
```


Current task: 11

11. С помощью команды git log просмотрите историю в локальной версии ветки master

script:
```shell
$ git log main
commit 15021e7c68289ba9995582231d87c217130e8187 (main)
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Thu Apr 4 10:04:24 2024 +0300

    changed file hello_world.cpp

commit 56e932aa81db21ac246b9fc195c1595dd11eaf17
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Thu Apr 4 09:58:19 2024 +0300

    was added code that prints 'Hello World'

commit 778a5ccb77275551c127d0543733bc7e49138b54 (origin/main, origin/HEAD)
Author: Dzhamalay <145156358+Dzhamalay@users.noreply.github.com>
Date:   Thu Apr 4 09:45:30 2024 +0300

    Initial commit
```

Current task: 12

12. Удалите локальную ветку patch1.

script:
```shell
$ git branch -D patch1
Deleted branch patch1 (was 7b9ff41).
```


# Part 3

Current task: 1

1. Создайте новую локальную ветку patch2.

```shell
$ git branch patch2
```


____
Current task: 2

2. Измените стиль кода с помощью утилиты clang-format . Например, используя вариант -style=Mozilla.

script:
```shell
$ clang-format -i -style=Mozilla examples/hello_world.cpp
```


____
Current task: 3

3. commit , push , создайте pull-request patch2 -> master.

```shell
$ git add .
$ git commit -m "changed codestyle in file hello_world.cpp"
[patch2 6999b6f] changed codestyle in file hello_world.cpp
 1 file changed, 7 insertions(+), 6 deletions(-)
$ git push -u origin_ patch2
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 488 bytes | 488.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/Dzhamalay/lab02_3/pull/new/patch2
remote: 
To https://github.com/Dzhamalay/lab02_3
 * [new branch]      patch2 -> patch2
Branch 'patch2' set up to track remote branch 'patch2' from 'origin_'.

```

____
Current task: 6

6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.

script:
```shell
$ git pull
Updating 15021e7..a2130fc
Fast-forward
 examples/hello_world.cpp | 8 +++-----
 1 file changed, 3 insertions(+), 5 deletions(-)
 
 $ git rebase main
Auto-merging examples/hello_world.cpp
CONFLICT (content): Merge conflict in examples/hello_world.cpp
error: could not apply 6999b6f... changed codestyle in file hello_world.cpp
hint: Resolve all conflicts manually, mark them as resolved with
hint: "git add/rm <conflicted_files>", then run "git rebase --continue".
hint: You can instead skip this commit: run "git rebase --skip".
hint: To abort and get back to the state before "git rebase", run "git rebase --abort".
Could not apply 6999b6f... changed codestyle in file hello_world.cpp

$ git status
interactive rebase in progress; onto a2130fc
Last command done (1 command done):
   pick 6999b6f changed codestyle in file hello_world.cpp
No commands remaining.
You are currently rebasing branch 'patch2' on 'a2130fc'.
  (fix conflicts and then run "git rebase --continue")
  (use "git rebase --skip" to skip this patch)
  (use "git rebase --abort" to check out the original branch)

Unmerged paths:
  (use "git restore --staged <file>..." to unstage)
  (use "git add <file>..." to mark resolution)
	both modified:   examples/hello_world.cpp

no changes added to commit (use "git add" and/or "git commit -a")

$ nano examples/hello_world.cpp

$ git add .

$ git status
interactive rebase in progress; onto a2130fc
Last command done (1 command done):
   pick 6999b6f changed codestyle in file hello_world.cpp
No commands remaining.
You are currently rebasing branch 'patch2' on 'a2130fc'.
  (all conflicts fixed: run "git rebase --continue")

$ git rebase --continue
Successfully rebased and updated refs/heads/patch2.

```

____
Current task: 7

7. Сделайте force push в ветку patch2

script:
```shell
$ git push -f origin_ patch2
Enumerating objects: 14, done.
Counting objects: 100% (14/14), done.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (8/8), 869 bytes | 869.00 KiB/s, done.
Total 8 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Dzhamalay/lab02_3
   a2130fc..659f908  patch2 -> patch2
```


