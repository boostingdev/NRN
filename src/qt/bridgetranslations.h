#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("NeuronBridge", "Overview"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Send"),
QT_TRANSLATE_NOOP("NeuronBridge", "Receive"),
QT_TRANSLATE_NOOP("NeuronBridge", "Transactions"),
QT_TRANSLATE_NOOP("NeuronBridge", "Address Book"),
QT_TRANSLATE_NOOP("NeuronBridge", "Chat"),
QT_TRANSLATE_NOOP("NeuronBridge", "Notifications"),
QT_TRANSLATE_NOOP("NeuronBridge", "Options"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Advanced"),
QT_TRANSLATE_NOOP("NeuronBridge", "Backup"),
QT_TRANSLATE_NOOP("NeuronBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("NeuronBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Tools"),
QT_TRANSLATE_NOOP("NeuronBridge", "Chain Data"),
QT_TRANSLATE_NOOP("NeuronBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("NeuronBridge", "Sign Message"),
QT_TRANSLATE_NOOP("NeuronBridge", "Verify Message"),
QT_TRANSLATE_NOOP("NeuronBridge", "Debug"),
QT_TRANSLATE_NOOP("NeuronBridge", "About Neuron"),
QT_TRANSLATE_NOOP("NeuronBridge", "About QT"),
QT_TRANSLATE_NOOP("NeuronBridge", "QR code"),
QT_TRANSLATE_NOOP("NeuronBridge", "Address:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Label:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Narration:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Amount:"),
QT_TRANSLATE_NOOP("NeuronBridge", "NRN"),
QT_TRANSLATE_NOOP("NeuronBridge", "mNRN"),
QT_TRANSLATE_NOOP("NeuronBridge", "µNRN"),
QT_TRANSLATE_NOOP("NeuronBridge", "Neuronshi"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Normal"),
QT_TRANSLATE_NOOP("NeuronBridge", "Stealth"),
QT_TRANSLATE_NOOP("NeuronBridge", "BIP32"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add Address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("NeuronBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("NeuronBridge", "Address Type"),
QT_TRANSLATE_NOOP("NeuronBridge", "Group"),
QT_TRANSLATE_NOOP("NeuronBridge", "Label"),
QT_TRANSLATE_NOOP("NeuronBridge", "Address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Public Key"),
QT_TRANSLATE_NOOP("NeuronBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("NeuronBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("NeuronBridge", "Market"),
QT_TRANSLATE_NOOP("NeuronBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("NeuronBridge", "Coin Control"),
QT_TRANSLATE_NOOP("NeuronBridge", "Make payment"),
QT_TRANSLATE_NOOP("NeuronBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("NeuronBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("NeuronBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("NeuronBridge", "Quantity:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Fee:"),
QT_TRANSLATE_NOOP("NeuronBridge", "After Fee:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Bytes:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Priority:"),
QT_TRANSLATE_NOOP("NeuronBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Change:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Custom change address"),
QT_TRANSLATE_NOOP("NeuronBridge", "From account"),
QT_TRANSLATE_NOOP("NeuronBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("NeuronBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("NeuronBridge", "Balance:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("NeuronBridge", "To account"),
QT_TRANSLATE_NOOP("NeuronBridge", "Pay to"),
QT_TRANSLATE_NOOP("NeuronBridge", "Narration"),
QT_TRANSLATE_NOOP("NeuronBridge", "Amount"),
QT_TRANSLATE_NOOP("NeuronBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("NeuronBridge", "Clear All"),
QT_TRANSLATE_NOOP("NeuronBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("NeuronBridge", "Send Payment"),
QT_TRANSLATE_NOOP("NeuronBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("NeuronBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("NeuronBridge", "Type"),
QT_TRANSLATE_NOOP("NeuronBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("NeuronBridge", "New Address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Copy Address"),
QT_TRANSLATE_NOOP("NeuronBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("NeuronBridge", "Date"),
QT_TRANSLATE_NOOP("NeuronBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("NeuronBridge", "Delete"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("NeuronBridge", "Name:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Public Key:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("NeuronBridge", "Choose identity"),
QT_TRANSLATE_NOOP("NeuronBridge", "Identity:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("NeuronBridge", "Group name:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Create Group"),
QT_TRANSLATE_NOOP("NeuronBridge", "Invite others"),
QT_TRANSLATE_NOOP("NeuronBridge", "Search"),
QT_TRANSLATE_NOOP("NeuronBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("NeuronBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("NeuronBridge", "Invite"),
QT_TRANSLATE_NOOP("NeuronBridge", "GROUP"),
QT_TRANSLATE_NOOP("NeuronBridge", "BOOK"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("NeuronBridge", "CHAT"),
QT_TRANSLATE_NOOP("NeuronBridge", "Leave Group"),
QT_TRANSLATE_NOOP("NeuronBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("NeuronBridge", "Coin Value"),
QT_TRANSLATE_NOOP("NeuronBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("NeuronBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Spends"),
QT_TRANSLATE_NOOP("NeuronBridge", "Least Depth"),
QT_TRANSLATE_NOOP("NeuronBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("NeuronBridge", "Refresh"),
QT_TRANSLATE_NOOP("NeuronBridge", "Hash"),
QT_TRANSLATE_NOOP("NeuronBridge", "Height"),
QT_TRANSLATE_NOOP("NeuronBridge", "Timestamp"),
QT_TRANSLATE_NOOP("NeuronBridge", "Value Out"),
QT_TRANSLATE_NOOP("NeuronBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("NeuronBridge", "Main"),
QT_TRANSLATE_NOOP("NeuronBridge", "Network"),
QT_TRANSLATE_NOOP("NeuronBridge", "Window"),
QT_TRANSLATE_NOOP("NeuronBridge", "Display"),
QT_TRANSLATE_NOOP("NeuronBridge", "I2P"),
QT_TRANSLATE_NOOP("NeuronBridge", "Tor"),
QT_TRANSLATE_NOOP("NeuronBridge", "Start Neuron on system login"),
QT_TRANSLATE_NOOP("NeuronBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("NeuronBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("NeuronBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("NeuronBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("NeuronBridge", "Reserve:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("NeuronBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("NeuronBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("NeuronBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("NeuronBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("NeuronBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("NeuronBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Details"),
QT_TRANSLATE_NOOP("NeuronBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Port:"),
QT_TRANSLATE_NOOP("NeuronBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("NeuronBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("NeuronBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("NeuronBridge", "Notifications:"),
QT_TRANSLATE_NOOP("NeuronBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("NeuronBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("NeuronBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Cancel"),
QT_TRANSLATE_NOOP("NeuronBridge", "Apply"),
QT_TRANSLATE_NOOP("NeuronBridge", "Ok"),
QT_TRANSLATE_NOOP("NeuronBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("NeuronBridge", "Password"),
QT_TRANSLATE_NOOP("NeuronBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Language"),
QT_TRANSLATE_NOOP("NeuronBridge", "English"),
QT_TRANSLATE_NOOP("NeuronBridge", "French"),
QT_TRANSLATE_NOOP("NeuronBridge", "Japanese"),
QT_TRANSLATE_NOOP("NeuronBridge", "Spanish"),
QT_TRANSLATE_NOOP("NeuronBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Next Step"),
QT_TRANSLATE_NOOP("NeuronBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("NeuronBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("NeuronBridge", "Important!"),
QT_TRANSLATE_NOOP("NeuronBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("NeuronBridge", "Back"),
QT_TRANSLATE_NOOP("NeuronBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("NeuronBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("NeuronBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("NeuronBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("NeuronBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("NeuronBridge", "Accounts"),
QT_TRANSLATE_NOOP("NeuronBridge", "ID"),
QT_TRANSLATE_NOOP("NeuronBridge", "Name"),
QT_TRANSLATE_NOOP("NeuronBridge", "Created"),
QT_TRANSLATE_NOOP("NeuronBridge", "Active Account"),
QT_TRANSLATE_NOOP("NeuronBridge", "Default"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("NeuronBridge", "Path"),
QT_TRANSLATE_NOOP("NeuronBridge", "Active"),
QT_TRANSLATE_NOOP("NeuronBridge", "Master"),
QT_TRANSLATE_NOOP("NeuronBridge", "Make Default"),
QT_TRANSLATE_NOOP("NeuronBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("NeuronBridge", "Set as Master"),
QT_TRANSLATE_NOOP("NeuronBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("NeuronBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("NeuronBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("NeuronBridge", "0 active connections to Neuron network"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("NeuronBridge", "Open chat list"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("NeuronBridge", "Inputs"),
QT_TRANSLATE_NOOP("NeuronBridge", "Values"),
QT_TRANSLATE_NOOP("NeuronBridge", "Outputs"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a Neuron address to sign the message with (e.g. Ner4HNAEfwYhBmGXcFP2Po1NpRUEiK8km2)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("NeuronBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("NeuronBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a Neuron address to verify the message with (e.g. Ner4HNAEfwYhBmGXcFP2Po1NpRUEiK8km2)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a Neuron signature"),
QT_TRANSLATE_NOOP("NeuronBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("NeuronBridge", "Your total balance"),
QT_TRANSLATE_NOOP("NeuronBridge", "Balances overview"),
QT_TRANSLATE_NOOP("NeuronBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("NeuronBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("NeuronBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("NeuronBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("NeuronBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("NeuronBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("NeuronBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("NeuronBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("NeuronBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("NeuronBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("NeuronBridge", "The label for this address"),
QT_TRANSLATE_NOOP("NeuronBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("NeuronBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("NeuronBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("NeuronBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("NeuronBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("NeuronBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("NeuronBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("NeuronBridge", "Short payment note."),
QT_TRANSLATE_NOOP("NeuronBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("NeuronBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("NeuronBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter a password"),
QT_TRANSLATE_NOOP("NeuronBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("NeuronBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("NeuronBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("NeuronBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("NeuronBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
