import os

def list_directory_contents(path):
    """
    Prints the contents of the specified directory.
    
    Parameters:
    path (str): The path of the directory to list the contents of.
    """
    try:
        # Attempt to retrieve the contents of the directory
        contents = os.listdir(path)
        print(f"Contents of '{path}':")
        # Loop through and print each item in the directory
        for item in contents:
            print(item)
    except FileNotFoundError:
        # Handle the case where the directory does not exist
        print(f"Error: The directory '{path}' does not exist.")
    except PermissionError:
        # Handle the case where the user lacks permissions to access the directory
        print(f"Error: Permission denied to access '{path}'.")
    except Exception as e:
        # Handle any other unexpected errors
        print(f"An unexpected error occurred: {e}")

# Example usage
if __name__ == "__main__":
    # Prompt the user to input the directory path
    directory_path = input("Enter the directory path: ")
    # Call the function to list the contents of the specified directory
    list_directory_contents(directory_path)
