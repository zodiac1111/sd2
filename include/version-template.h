/** 
 * version.h
 * @file version-template.h
 * 版本号文件,发布时用于生成版本号.
 * version-template.h 是模板文件.
 * version.h 是由模板文件生成的版本文件.
 * 运行 makeversion.sh 脚本将根据git版本由模板文件生成version.h文件
 * 请在需要时直接修改模板文件,而不是修改生成的 version.h 文件!
 */
#ifndef _VERSION_H_
#define _VERSION_H_
#define MAJOR 0
#define MINOR 0
#define PATCHLEVEL $PATHLEAVE
#define GIT_VERSION "$GIT_VERSION"
#endif // VERSION_H
