# group `RHAPI_KeyClaims` <a id="group__RHAPI__KeyClaims"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KeyClaims`](#structFRHAPI__KeyClaims) | List of Key Claims available to the player.

## struct `FRHAPI_KeyClaims` <a id="structFRHAPI__KeyClaims"></a>

```
struct FRHAPI_KeyClaims
  : public FRHAPI_Model
```

List of Key Claims available to the player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > `[`Claims`](#structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263) | List of Key Claims available to the Player.
`public virtual bool `[`FromJson`](#structFRHAPI__KeyClaims_1a267c896754ce2b5be2bda66816afb013)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KeyClaims_1acac4e11383c4b935a7ada20845c1e61c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a238768f96e700f779de67374bc77da86)`()` | Gets the value of Claims.
`public inline const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a54c92646bf5dd2ec2db58a29cafc1a49)`() const` | Gets the value of Claims.
`public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` | Sets the value of Claims.
`public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` | Sets the value of Claims using move semantics.

### Members

#### `public TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > `[`Claims`](#structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263) <a id="structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263"></a>

List of Key Claims available to the Player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__KeyClaims_1a267c896754ce2b5be2bda66816afb013)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KeyClaims_1a267c896754ce2b5be2bda66816afb013"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KeyClaims_1acac4e11383c4b935a7ada20845c1e61c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KeyClaims_1acac4e11383c4b935a7ada20845c1e61c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a238768f96e700f779de67374bc77da86)`()` <a id="structFRHAPI__KeyClaims_1a238768f96e700f779de67374bc77da86"></a>

Gets the value of Claims.

#### `public inline const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & `[`GetClaims`](#structFRHAPI__KeyClaims_1a54c92646bf5dd2ec2db58a29cafc1a49)`() const` <a id="structFRHAPI__KeyClaims_1a54c92646bf5dd2ec2db58a29cafc1a49"></a>

Gets the value of Claims.

#### `public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08)`(const TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > & NewValue)` <a id="structFRHAPI__KeyClaims_1a650a9f6b6c55d1374be035fff8c71a08"></a>

Sets the value of Claims.

#### `public inline void `[`SetClaims`](#structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273)`(TArray< `[`FRHAPI_KeyClaim`](RHAPI_KeyClaim.md#structFRHAPI__KeyClaim)` > && NewValue)` <a id="structFRHAPI__KeyClaims_1a344b62ed098251c4036b106236a0c273"></a>

Sets the value of Claims using move semantics.

