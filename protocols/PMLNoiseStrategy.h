/* Generated by RuntimeBrowser.
 */

@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>

@required

- (void)addNoiseToDenseVector:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToFeatureMatrix:(PMLDenseMatrix *)arg1;
- (void)addNoiseToGradient:(PMLDenseVector *)arg1;
- (void)addNoiseToObjectiveFeatures:(PMLDenseVector *)arg1;
- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
- (void)addNoiseToWeights:(PMLModelWeights *)arg1;
- (int)maxIterations;
- (void)setMaxIterations:(int)arg1;

@end