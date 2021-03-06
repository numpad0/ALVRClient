#ifndef ALVRCLIENT_ASSET_H
#define ALVRCLIENT_ASSET_H

#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>
#include <vector>
#include <jni.h>

void setAssetManager(JNIEnv *env, jobject assetManager);
bool loadAsset(const char *path, std::vector<unsigned char> &buffer);

#endif //ALVRCLIENT_ASSET_H
