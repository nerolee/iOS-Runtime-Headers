/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategory : NSObject {
    SKUIArtworkList *_artworkList;
    long long _categoryIdentifier;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) SKUIArtworkList *artworkList;
@property (nonatomic, readonly) long long categoryIdentifier;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *parentLabel;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkList;
- (long long)categoryIdentifier;
- (id)children;
- (BOOL)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;
- (id)name;
- (id)parentLabel;
- (id)subcategoryContainingURL:(id)arg1;

@end
