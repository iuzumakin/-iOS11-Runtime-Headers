/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDevice : NSObject {
    int  _commandQueueCount;
    MTLCompiler * _compiler;
    <MTLDeviceSPI> * _deviceWrapper;
    unsigned long long  _globalTraceObjectID;
    struct MTLLibraryBuilder { id x1; /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*x2; void*x3; void*x4; void*x5; void*x6; void*x7; unsigned long x8; unsigned long x9; int x10; unsigned int x11/* : ? */; const void*x12; const void*x13; unsigned int x14; double x15; void*x16; in void*x17; int x18; float x19; int x20; void*x21; const void*x22; void*x23; void*x24; void*x25; unsigned long x26; unsigned long x27; int x28; unsigned int x29/* : ? */; const void*x30; const void*x31; unsigned char x32; out in void*x33; void*x34; int x35; in void*x36; const void*x37; char *x38; void*x39; void*x40; short x41; void*x42; double x43; SEL x44; SEL x45; void*x46; void*x47; void*x48; SEL x49; SEL x50; long x51; void*x52; short x53; short x54; void*x55; void*x56; void*x57; unsigned long x58; unsigned long x59; int x60; unsigned int x61/* : ? */; const void*x62; const void*x63; unsigned int x64; double x65; void*x66; in void*x67; int x68; float x69; int x70; void*x71; const void*x72; void*x73; void*x74; short x75; void*x76; double x77; SEL x78; } * _libraryBuilder;
    struct { 
        unsigned int maxColorAttachments; 
        unsigned int maxVertexAttributes; 
        unsigned int maxVertexBuffers; 
        unsigned int maxVertexTextures; 
        unsigned int maxVertexSamplers; 
        unsigned int maxVertexInlineDataSize; 
        unsigned int maxInterpolants; 
        unsigned int maxFragmentBuffers; 
        unsigned int maxFragmentTextures; 
        unsigned int maxFragmentSamplers; 
        unsigned int maxFragmentInlineDataSize; 
        unsigned int maxComputeBuffers; 
        unsigned int maxComputeTextures; 
        unsigned int maxComputeSamplers; 
        unsigned int maxComputeInlineDataSize; 
        unsigned int maxComputeLocalMemorySizes; 
        unsigned int maxTotalComputeThreadsPerThreadgroup; 
        unsigned int maxComputeThreadgroupMemory; 
        float maxLineWidth; 
        float maxPointSize; 
        unsigned int maxVisibilityQueryOffset; 
        unsigned int maxBufferLength; 
        unsigned int minConstantBufferAlignmentBytes; 
        unsigned int minBufferNoCopyAlignmentBytes; 
        unsigned int maxTextureWidth1D; 
        unsigned int maxTextureWidth2D; 
        unsigned int maxTextureHeight2D; 
        unsigned int maxTextureWidth3D; 
        unsigned int maxTextureHeight3D; 
        unsigned int maxTextureDepth3D; 
        unsigned int maxTextureDimensionCube; 
        unsigned int maxTextureLayers; 
        unsigned int linearTextureAlignmentBytes; 
        unsigned int iosurfaceTextureAlignmentBytes; 
        unsigned int iosurfaceReadOnlyTextureAlignmentBytes; 
        unsigned int deviceLinearTextureAlignmentBytes; 
        unsigned int deviceLinearReadOnlyTextureAlignmentBytes; 
        unsigned int maxFunctionConstantIndices; 
        unsigned int maxComputeThreadgroupMemoryAlignmentBytes; 
        unsigned int maxInterpolatedComponents; 
        unsigned int maxTessellationFactor; 
        unsigned int maxCustomSamplePositions; 
        unsigned int maxFramebufferStorageBits; 
        unsigned int maxTileBuffers; 
        unsigned int maxTileTextures; 
        unsigned int maxTileSamplers; 
        unsigned int maxTileInlineDataSize; 
        unsigned int minTilePixels; 
    }  _limits;
    MTLIOMemoryInfo * _memoryInfo;
    struct MTLPipelineCollection { struct unordered_map<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *, std::__1::hash<_MTLLibrary *>, std::__1::equal_to<_MTLLibrary *>, std::__1::allocator<std::__1::pair<_MTLLibrary *const, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct __hash_table<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::__unordered_map_hasher<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::hash<_MTLLibrary *>, true>, std::__1::__unordered_map_equal<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::equal_to<_MTLLibrary *>, true>, std::__1::allocator<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; } * _pipelineDescriptors;
    struct MTLPipelineLibraryBuilder { id x1; } * _pipelineLibraryBuilder;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly) MTLCompiler *compiler;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; } indirectArgumentBufferCapabilities;
@property (readonly) unsigned long long indirectArgumentBuffersSupport;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; }*limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxTessellationFactor;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) unsigned long long maxTileBuffers;
@property (readonly) unsigned long long maxTileInlineDataSize;
@property (readonly) unsigned long long maxTileSamplers;
@property (readonly) unsigned long long maxTileTextures;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minTilePixels;
@property (readonly) NSString *name;
@property (getter=areRasterOrderGroupsSupported, readonly) bool rasterOrderGroupsSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (bool)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2;
+ (bool)metalBufferSanitizerEnabled;

- (void)_decrementCommandQueueCount;
- (void)_incrementCommandQueueCount;
- (void)_purgeDevice;
- (void)_setDeviceWrapper:(id)arg1;
- (unsigned int)acceleratorPort;
- (bool)areRasterOrderGroupsSupported;
- (unsigned long long)argumentBuffersSupport;
- (id)compiler;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long*)arg2;
- (void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3;
- (struct NSObject { Class x1; }*)computeVariantWithCompilerOutput:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned long long)deviceLinearTextureAlignmentBytes;
- (bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (id)endCollectingPipelineDescriptors;
- (id)familyName;
- (id)formattedDescription:(unsigned long long)arg1;
- (void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long*)arg2 previousStateVariant:(id)arg3;
- (void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long*)arg4;
- (id)fragmentVariantWithCompilerOutput:(id)arg1;
- (void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2;
- (void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long long)arg2;
- (void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long long)arg2;
- (void)getDefaultSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void*)getShaderCacheKeys;
- (unsigned long long)globalTraceObjectID;
- (struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; })indirectArgumentBufferCapabilities;
- (unsigned long long)indirectArgumentBuffersSupport;
- (id)init;
- (void)initLimits;
- (unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned long long)iosurfaceTextureAlignmentBytes;
- (bool)isQuadDataSharingSupported;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; }*)limits;
- (unsigned long long)linearTextureAlignmentBytes;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned long long)maxCustomSamplePositions;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFramebufferStorageBits;
- (unsigned long long)maxFunctionConstantIndices;
- (unsigned long long)maxInterpolants;
- (unsigned long long)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureDimensionCube;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth1D;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (unsigned long long)maxTileBuffers;
- (unsigned long long)maxTileInlineDataSize;
- (unsigned long long)maxTileSamplers;
- (unsigned long long)maxTileTextures;
- (unsigned long long)maxTotalComputeThreadsPerThreadgroup;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxVisibilityQueryOffset;
- (unsigned long long)minBufferNoCopyAlignmentBytes;
- (unsigned long long)minConstantBufferAlignmentBytes;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minTilePixels;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)name;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(struct NSObject { Class x1; }*)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })pipelineFlagsWithComputeVariant:(struct NSObject { Class x1; }*)arg1;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject { Class x1; }*)arg1;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)productName;
- (unsigned long long)readWriteTextureSupport;
- (void)registerCompiler:(id)arg1;
- (void)registerComputePipelineDescriptor:(id)arg1;
- (void)registerRenderPipelineDescriptor:(id)arg1;
- (void)registerTileRenderPipelineDescriptor:(id)arg1;
- (void)releaseCacheEntry:(/* Warning: unhandled struct encoding: '{MTLLibraryContainer=i{?=[32C]}^{MTLLibraryData}@@@@@}' */ struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; id x6; }*)arg1;
- (id)serialQueue;
- (void)startCollectingPipelineDescriptors;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (void)unloadShaderCaches;
- (id)vendorName;
- (void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long*)arg4;
- (void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long*)arg2 nextStageVariant:(id)arg3;
- (id)vertexVariantWithCompilerOutput:(id)arg1;

@end