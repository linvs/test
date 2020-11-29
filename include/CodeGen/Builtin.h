#pragma once

#include "Config/Config.h"
#include "Support/Alias.h"
#include "Support/Error.h"
#include "Support/LLVM.h"

class Builtin {
public:
    static void initialize(LLVMModule &module, LLVMContext &context);
};

class BuiltinError {
public:
    static void linkModule(LLVMModule &module, LLVMContext &context);

    static void getTypeAndFunction(LLVMModule &module);

    static inline llvm::PointerType *type = nullptr;
    static inline LLVMFunction *exitIfErrorFunc = nullptr;
};

class BuiltinString {
public:
    static void linkModule(LLVMModule &module, LLVMContext &context);

    static void getTypeAndFunction(LLVMModule &module);

    static inline llvm::PointerType *type = nullptr;
    static inline LLVMFunction *createFunc = nullptr;
    static inline LLVMFunction *deleteFunc = nullptr;
    static inline LLVMFunction *getSizeFunc = nullptr;
    static inline LLVMFunction *concatFunc = nullptr;
    static inline LLVMFunction *appendFunc = nullptr;
    static inline LLVMFunction *prependFunc = nullptr;
    static inline LLVMFunction *sliceFunc = nullptr;
    static inline LLVMFunction *equalsFunc = nullptr;
    static inline LLVMFunction *indexOfFunc = nullptr;
    static inline LLVMFunction *trimLeftFunc = nullptr;
    static inline LLVMFunction *trimRightFunc = nullptr;
    static inline LLVMFunction *trimFunc = nullptr;
};

class BuiltinArray {
public:
    static void linkModule(LLVMModule &module, LLVMContext &context);

    static void getTypeAndFunction(LLVMModule &module);

    static inline llvm::PointerType *type = nullptr;
    static inline LLVMFunction *createIntegerArrayFunc = nullptr;
    static inline LLVMFunction *createBooleanArrayFunc = nullptr;
    static inline LLVMFunction *createStringArrayFunc = nullptr;
    static inline LLVMFunction *createArrayArrayFunc = nullptr;
    static inline LLVMFunction *createIntegerArrayWithLiteralFunc = nullptr;
    static inline LLVMFunction *createBooleanArrayWithLiteralFunc = nullptr;
    static inline LLVMFunction *createStringArrayWithLiteralFunc = nullptr;
    static inline LLVMFunction *createArrayArrayWithLiteralFunc = nullptr;
    static inline LLVMFunction *deleteFunc = nullptr;
    static inline LLVMFunction *getSizeFunc = nullptr;
    static inline LLVMFunction *isNDArrayFunc = nullptr;
    static inline LLVMFunction *pushIntegerFunc = nullptr;
    static inline LLVMFunction *pushBooleanFunc = nullptr;
    static inline LLVMFunction *pushStringFunc = nullptr;
    static inline LLVMFunction *pushArrayFunc = nullptr;
    static inline LLVMFunction *popIntegerFunc = nullptr;
    static inline LLVMFunction *popBooleanFunc = nullptr;
    static inline LLVMFunction *popStringFunc = nullptr;
    static inline LLVMFunction *popArrayFunc = nullptr;
    static inline LLVMFunction *getIntegerFunc = nullptr;
    static inline LLVMFunction *getBooleanFunc = nullptr;
    static inline LLVMFunction *getStringFunc = nullptr;
    static inline LLVMFunction *getArrayFunc = nullptr;
    static inline LLVMFunction *setIntegerFunc = nullptr;
    static inline LLVMFunction *setBooleanFunc = nullptr;
    static inline LLVMFunction *setStringFunc = nullptr;
    static inline LLVMFunction *setArrayFunc = nullptr;
    static inline LLVMFunction *sliceFunc = nullptr;
};

class BuiltinIO {
public:
    static void linkModule(LLVMModule &module, LLVMContext &context);

    static void getTypeAndFunction(LLVMModule &module);

    static inline LLVMFunction *integer2stringFunc = nullptr;
    static inline LLVMFunction *string2integerFunc = nullptr;
    static inline LLVMFunction *printIntegerFunc = nullptr;
    static inline LLVMFunction *printlnIntegerFunc = nullptr;
    static inline LLVMFunction *printStringFunc = nullptr;
    static inline LLVMFunction *printlnStringFunc = nullptr;
};
