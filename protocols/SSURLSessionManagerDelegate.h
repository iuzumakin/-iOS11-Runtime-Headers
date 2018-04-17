/* Generated by RuntimeBrowser.
 */

@protocol SSURLSessionManagerDelegate <NSObject>

@optional

- (NSURLCache *)URLCache;
- (NSString *)URLCacheID;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(void *)arg1 dataTask:(void *)arg2 didReceiveResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionDataTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (NSData *)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 decodedDataForResponseData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithEvent:(SSMetricsLoadURLEvent *)arg3 error:(NSError *)arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didFinishCreatingHTTPArchive:(SSHTTPArchive *)arg3;
- (void)URLSession:(void *)arg1 task:(void *)arg2 didReceiveChallenge:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURLSession *, NSURLSessionTask *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(void *)arg1 task:(void *)arg2 needNewBodyStream:(void *)arg3; // needs 3 arg types, found 8: NSURLSession *, NSURLSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)URLSession:(void *)arg1 task:(void *)arg2 willPerformHTTPRedirection:(void *)arg3 newRequest:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSURLSession *, NSURLSessionTask *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (SSBag *)bag;
- (bool)isURLBagRequest;
- (NSNumber *)metricsLoadURLSamplingPercentage;
- (NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
- (NSNumber *)metricsLoadURLSessionDuration;
- (SSURLRequestProperties *)requestProperties;
- (bool)shouldDisableCellular;
- (bool)shouldRequireCellular;
- (bool)shouldSetCookies;
- (NSData *)sourceAppAuditTokenData;
- (NSString *)sourceAppBundleID;

@end