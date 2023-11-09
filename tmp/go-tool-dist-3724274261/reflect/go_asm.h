// generated by compile -asmhdr from package reflect

#define abiStep__size 48
#define abiStep_kind 0
#define abiStep_offset 8
#define abiStep_size 16
#define abiStep_stkOff 24
#define abiStep_ireg 32
#define abiStep_freg 40
#define const_abiStepBad 0
#define const_abiStepStack 1
#define const_abiStepIntReg 2
#define const_abiStepPointer 3
#define const_abiStepFloatReg 4
#define abiSeq__size 72
#define abiSeq_steps 0
#define abiSeq_valueStart 24
#define abiSeq_stackBytes 48
#define abiSeq_iregs 56
#define abiSeq_fregs 64
#define abiDesc__size 184
#define abiDesc_call 0
#define abiDesc_ret 72
#define abiDesc_stackCallArgsSize 144
#define abiDesc_retOffset 152
#define abiDesc_spill 160
#define abiDesc_stackPtrs 168
#define abiDesc_inRegPtrs 176
#define abiDesc_outRegPtrs 178
#define visit__size 32
#define visit_a1 0
#define visit_a2 8
#define visit_typ 16
#define makeFuncImpl__size 48
#define makeFuncImpl_makeFuncCtxt 0
#define makeFuncImpl_ftyp 32
#define makeFuncImpl_fn 40
#define methodValue__size 64
#define methodValue_makeFuncCtxt 0
#define methodValue_method 32
#define methodValue_rcvr 40
#define makeFuncCtxt__size 32
#define makeFuncCtxt_fn 0
#define makeFuncCtxt_stack 8
#define makeFuncCtxt_argLen 16
#define makeFuncCtxt_regPtrs 24
#define const_Invalid 0
#define const_Bool 1
#define const_Int 2
#define const_Int8 3
#define const_Int16 4
#define const_Int32 5
#define const_Int64 6
#define const_Uint 7
#define const_Uint8 8
#define const_Uint16 9
#define const_Uint32 10
#define const_Uint64 11
#define const_Uintptr 12
#define const_Float32 13
#define const_Float64 14
#define const_Complex64 15
#define const_Complex128 16
#define const_Array 17
#define const_Chan 18
#define const_Func 19
#define const_Interface 20
#define const_Map 21
#define const_Pointer 22
#define const_Slice 23
#define const_String 24
#define const_Struct 25
#define const_UnsafePointer 26
#define const_Ptr 22
#define uncommonType__size 16
#define uncommonType_PkgPath 0
#define uncommonType_Mcount 4
#define uncommonType_Xcount 6
#define uncommonType_Moff 8
#define common__size 48
#define common_Type 0
#define rtype__size 48
#define rtype_t 0
#define const_RecvDir 1
#define const_SendDir 2
#define const_BothDir 3
#define arrayType__size 72
#define arrayType_Type 0
#define arrayType_Elem 48
#define arrayType_Slice 56
#define arrayType_Len 64
#define chanType__size 64
#define chanType_Type 0
#define chanType_Elem 48
#define chanType_Dir 56
#define funcType__size 56
#define funcType_Type 0
#define funcType_InCount 48
#define funcType_OutCount 50
#define interfaceType__size 80
#define interfaceType_InterfaceType 0
#define mapType__size 88
#define mapType_MapType 0
#define ptrType__size 56
#define ptrType_PtrType 0
#define sliceType__size 56
#define sliceType_SliceType 0
#define structField__size 24
#define structField_Name 0
#define structField_Typ 8
#define structField_Offset 16
#define structType__size 80
#define structType_StructType 0
#define Method__size 80
#define Method_Name 0
#define Method_PkgPath 16
#define Method_Type 32
#define Method_Func 48
#define Method_Index 72
#define const_kindDirectIface 32
#define const_kindGCProg 64
#define const_kindMask 31
#define StructField__size 104
#define StructField_Name 0
#define StructField_PkgPath 16
#define StructField_Type 32
#define StructField_Tag 48
#define StructField_Offset 64
#define StructField_Index 72
#define StructField_Anonymous 96
#define fieldScan__size 32
#define fieldScan_typ 0
#define fieldScan_index 8
#define cacheKey__size 32
#define cacheKey_kind 0
#define cacheKey_t1 8
#define cacheKey_t2 16
#define cacheKey_extra 24
#define const_bucketSize 8
#define const_maxKeySize 128
#define const_maxValSize 128
#define structTypeUncommon__size 96
#define structTypeUncommon_structType 0
#define structTypeUncommon_u 80
#define const_maxPtrmaskBytes 2048
#define layoutKey__size 16
#define layoutKey_ftyp 0
#define layoutKey_rcvr 8
#define layoutType__size 200
#define layoutType_t 0
#define layoutType_framePool 8
#define layoutType_abid 16
#define bitVector__size 32
#define bitVector_n 0
#define bitVector_data 8
#define Value__size 24
#define Value_typ_ 0
#define Value_ptr 8
#define Value_flag 16
#define const_flagKindWidth 5
#define const_flagKindMask 31
#define const_flagStickyRO 32
#define const_flagEmbedRO 64
#define const_flagIndir 128
#define const_flagAddr 256
#define const_flagMethod 512
#define const_flagMethodShift 10
#define const_flagRO 96
#define ValueError__size 24
#define ValueError_Method 0
#define ValueError_Kind 16
#define emptyInterface__size 16
#define emptyInterface_typ 0
#define emptyInterface_word 8
#define nonEmptyInterface__size 16
#define nonEmptyInterface_itab 0
#define nonEmptyInterface_word 8
#define const_debugReflectCall false
#define hiter__size 96
#define hiter_key 0
#define hiter_elem 8
#define hiter_t 16
#define hiter_h 24
#define hiter_buckets 32
#define hiter_bptr 40
#define hiter_overflow 48
#define hiter_oldoverflow 56
#define hiter_startBucket 64
#define hiter_offset 72
#define hiter_wrapped 73
#define hiter_B 74
#define hiter_i 75
#define hiter_bucket 80
#define hiter_checkBucket 88
#define MapIter__size 120
#define MapIter_m 0
#define MapIter_hiter 24
#define StringHeader__size 16
#define StringHeader_Data 0
#define StringHeader_Len 8
#define SliceHeader__size 24
#define SliceHeader_Data 0
#define SliceHeader_Len 8
#define SliceHeader_Cap 16
#define runtimeSelect__size 32
#define runtimeSelect_dir 0
#define runtimeSelect_typ 8
#define runtimeSelect_ch 16
#define runtimeSelect_val 24
#define const_SelectSend 1
#define const_SelectRecv 2
#define const_SelectDefault 3
#define SelectCase__size 56
#define SelectCase_Dir 0
#define SelectCase_Chan 8
#define SelectCase_Send 32
#define const_go121noForceValueEscape true
#define const_maxZero 1024
#define visibleFieldsWalker__size 64
#define visibleFieldsWalker_byName 0
#define visibleFieldsWalker_visiting 8
#define visibleFieldsWalker_fields 16
#define visibleFieldsWalker_index 40
