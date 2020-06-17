# Demo for github action to get IPA
This is a demo how to export IPA and submit to Kryptowire Server with github action
The complete script is saved in GitHubActionScript.yml


## NOTE:
-   Encrypt cert and provision:\ 
Use gpg -c to "cert_name" to encrypt cert\
Use gpg -c to "provisioning_profile_name" to encrypt cert\
Save the Password as Secret in Github project and reference to the password by ${{ secrets.YOUR_PASSWORD }} in the YML file

- The action for submitting is located at: https://github.com/pkumar001/kryptowire-analysis-action
