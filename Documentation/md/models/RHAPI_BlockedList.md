# group `RHAPI_BlockedList` <a id="group__RHAPI__BlockedList"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedList`](#structFRHAPI__BlockedList) | The list of players that is blocked.

## struct `FRHAPI_BlockedList` <a id="structFRHAPI__BlockedList"></a>

```
struct FRHAPI_BlockedList
  : public FRHAPI_Model
```

The list of players that is blocked.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59) | 
`public TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > `[`Blocked`](#structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b) | 
`public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedList_1a4777a3c2c7202d9cb8b8d04f433fdb1d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedList_1a86a943e21ccd5a660b10343c57622437)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a5396c01063e705f35bed44517fb57d9e)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a5788033debdec806a353b479d52e3774)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aefc67b5c3763f47afd921a641856edc1)`()` | Gets the value of Blocked.
`public inline const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aacc7a644b18e06511b937af710e3134f)`() const` | Gets the value of Blocked.
`public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` | Sets the value of Blocked.
`public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` | Sets the value of Blocked using move semantics.
`public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1abe000a32ad378198993a9e59888d677a)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a7f06d404b524b06615fd6c6ddaaf8e3c)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` | Sets the value of Page using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59) <a id="structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59"></a>

#### `public TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > `[`Blocked`](#structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b) <a id="structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b"></a>

#### `public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a) <a id="structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedList_1a4777a3c2c7202d9cb8b8d04f433fdb1d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedList_1a4777a3c2c7202d9cb8b8d04f433fdb1d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedList_1a86a943e21ccd5a660b10343c57622437)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BlockedList_1a86a943e21ccd5a660b10343c57622437"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a5396c01063e705f35bed44517fb57d9e)`()` <a id="structFRHAPI__BlockedList_1a5396c01063e705f35bed44517fb57d9e"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a5788033debdec806a353b479d52e3774)`() const` <a id="structFRHAPI__BlockedList_1a5788033debdec806a353b479d52e3774"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140)`(const FGuid & NewValue)` <a id="structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a)`(FGuid && NewValue)` <a id="structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aefc67b5c3763f47afd921a641856edc1)`()` <a id="structFRHAPI__BlockedList_1aefc67b5c3763f47afd921a641856edc1"></a>

Gets the value of Blocked.

#### `public inline const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aacc7a644b18e06511b937af710e3134f)`() const` <a id="structFRHAPI__BlockedList_1aacc7a644b18e06511b937af710e3134f"></a>

Gets the value of Blocked.

#### `public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` <a id="structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec"></a>

Sets the value of Blocked.

#### `public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` <a id="structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3"></a>

Sets the value of Blocked using move semantics.

#### `public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1abe000a32ad378198993a9e59888d677a)`()` <a id="structFRHAPI__BlockedList_1abe000a32ad378198993a9e59888d677a"></a>

Gets the value of Page.

#### `public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a7f06d404b524b06615fd6c6ddaaf8e3c)`() const` <a id="structFRHAPI__BlockedList_1a7f06d404b524b06615fd6c6ddaaf8e3c"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` <a id="structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` <a id="structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05"></a>

Sets the value of Page using move semantics.

