/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheetAssistant : NSObject <DDDetectionControllerInteractionDelegate, WKActionSheetDelegate> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKActionSheetAssistantDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKActionSheetAssistantDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    }  _elementInfo;
    bool  _hasPendingActionSheet;
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    }  _interactionSheet;
    bool  _isPresentingDDUserInterface;
    bool  _needsLinkIndicator;
    struct optional<WebKit::InteractionInformationAtPosition> { 
        bool init_; 
        union storage_t<WebKit::InteractionInformationAtPosition> { 
            unsigned char dummy_; 
            struct InteractionInformationAtPosition { 
                struct InteractionInformationRequest { 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } point; 
                    bool includeSnapshot; 
                    bool includeLinkIndicator; 
                } request; 
                bool nodeAtPositionIsAssistedNode; 
                bool hasSelectionAtPosition; 
                bool isSelectable; 
                bool isNearMarkedText; 
                bool touchCalloutEnabled; 
                bool isLink; 
                bool isImage; 
                bool isAttachment; 
                bool isAnimatedImage; 
                bool isElement; 
                bool isDataDetectorLink; 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } adjustedPointForNodeRespondingToClickEvents; 
                struct URL { 
                    struct String { 
                        struct RefPtr<WTF::StringImpl> { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } m_string; 
                    unsigned int m_isValid : 1; 
                    unsigned int m_protocolIsInHTTPFamily : 1; 
                    unsigned int m_cannotBeABaseURL : 1; 
                    unsigned int m_schemeEnd; 
                    unsigned int m_userStart; 
                    unsigned int m_userEnd; 
                    unsigned int m_passwordEnd; 
                    unsigned int m_hostEnd; 
                    unsigned int m_portEnd; 
                    unsigned int m_pathAfterLastSlash; 
                    unsigned int m_pathEnd; 
                    unsigned int m_queryEnd; 
                } url; 
                struct URL { 
                    struct String { 
                        struct RefPtr<WTF::StringImpl> { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } m_string; 
                    unsigned int m_isValid : 1; 
                    unsigned int m_protocolIsInHTTPFamily : 1; 
                    unsigned int m_cannotBeABaseURL : 1; 
                    unsigned int m_schemeEnd; 
                    unsigned int m_userStart; 
                    unsigned int m_userEnd; 
                    unsigned int m_passwordEnd; 
                    unsigned int m_hostEnd; 
                    unsigned int m_portEnd; 
                    unsigned int m_pathAfterLastSlash; 
                    unsigned int m_pathEnd; 
                    unsigned int m_queryEnd; 
                } imageURL; 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } title; 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } idAttribute; 
                struct IntRect { 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } m_location; 
                    struct IntSize { 
                        int m_width; 
                        int m_height; 
                    } m_size; 
                } bounds; 
                struct RefPtr<WebKit::ShareableBitmap> { 
                    struct ShareableBitmap {} *m_ptr; 
                } image; 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } textBefore; 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } textAfter; 
                struct TextIndicatorData { 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } selectionRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } textBoundingRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } contentImageWithoutSelectionRectInRootViewCoordinates; 
                    struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { 
                        struct FloatRect {} *m_buffer; 
                        unsigned int m_capacity; 
                        unsigned int m_size; 
                    } textRectsInBoundingRectCoordinates; 
                    float contentImageScaleFactor; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImageWithHighlight; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImageWithoutSelection; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImage; 
                    struct Color { 
                        union { 
                            unsigned long long rgbaAndFlags; 
                            struct ExtendedColor {} *extendedColor; 
                        } m_colorData; 
                    } estimatedBackgroundColor; 
                    unsigned char presentationTransition; 
                    unsigned short options; 
                } linkIndicator; 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } dataDetectorIdentifier; 
                struct RetainPtr<NSArray> { 
                    void *m_ptr; 
                } dataDetectorResults; 
            } value_; 
        } storage_; 
    }  _positionInformation;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<UIView>="m_weakReference"@}' */ struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsLinkIndicator;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x1; double x2; })arg1 inHostView:(id)arg2;
- (void)cleanupSheet;
- (id)currentAvailableActionTitles;
- (void)dealloc;
- (struct RetainPtr<NSArray> { void *x1; })defaultActionsForImageSheet:(id)arg1;
- (struct RetainPtr<NSArray> { void *x1; })defaultActionsForLinkSheet:(id)arg1;
- (id)delegate;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (bool)isShowingSheet;
- (bool)needsLinkIndicator;
- (bool)presentSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForIndicatedElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLinkIndicator:(bool)arg1;
- (void)showDataDetectorsSheet;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)superviewForSheet;
- (bool)synchronouslyRetrievePositionInformation;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end