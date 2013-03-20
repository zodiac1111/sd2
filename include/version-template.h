/** @file version-template.h控制版本,被 pubilsh.sh所使用.
 version-template.h 是模板文件.
 version.h 是由模板文件生成的版本文件.
 使用 makeversion.sh 脚本将根据git版本由模板文件生成version.h文件
 请在需要时直接修改模板文件,而不是修改生成的<version.h>文件!
 */
#ifndef _VERSION_H_
#define _VERSION_H_
#define MAJOR 0
#define MINOR 0
#define PATCHLEVEL $PATHLEAVE
#define GIT_VERSION "$GIT_VERSION"
#endif // VERSION_H
